#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

#define BUF_SIZE 1024

/**
 * print_usage - Prints usage message and exits with code 97.
 */
void print_usage(void)
{
	dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
	exit(97);
}

/**
 * print_error - Prints an error message to stderr and exits.
 * @code: Exit code.
 * @message: Format string for the error.
 * @arg: Argument to include in the message.
 */
void print_error(int code, const char *message, const char *arg)
{
	dprintf(STDERR_FILENO, message, arg);
	exit(code);
}

/**
 * close_fd - Closes a file descriptor or exits with code 100 on failure.
 * @fd: File descriptor to close.
 */
void close_fd(int fd)
{
	if (close(fd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * copy_content - Reads from fd_from and writes to fd_to in 1024-byte chunks.
 * @fd_from: Source file descriptor.
 * @fd_to: Destination file descriptor.
 * @file_from: Source filename (for error messages).
 * @file_to: Destination filename (for error messages).
 */
void copy_content(int fd_from, int fd_to,
		const char *file_from, const char *file_to)
{
	int n_read, n_written;
	char buffer[BUF_SIZE];

	while ((n_read = read(fd_from, buffer, BUF_SIZE)) > 0)
	{
		n_written = write(fd_to, buffer, n_read);
		if (n_written != n_read)
			print_error(99, "Error: Can't write to %s\n", file_to);
	}
	if (n_read == -1)
		print_error(98, "Error: Can't read from file %s\n", file_from);
}

/**
 * main - Copies the content of one file to another.
 * @argc: Argument count.
 * @argv: Argument vector.
 * Return: 0 on success, exits with:
 *         97 - wrong argument count.
 *         98 - can't read from file.
 *         99 - can't write to file.
 *        100 - can't close file descriptor.
 */
int main(int argc, char *argv[])
{
	int fd_from, fd_to;

	if (argc != 3)
		print_usage();

	fd_from = open(argv[1], O_RDONLY);
	if (fd_from == -1)
		print_error(98, "Error: Can't read from file %s\n", argv[1]);

	fd_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (fd_to == -1)
	{
		close_fd(fd_from);
		print_error(99, "Error: Can't write to %s\n", argv[2]);
	}

	copy_content(fd_from, fd_to, argv[1], argv[2]);
	close_fd(fd_from);
	close_fd(fd_to);

	return (0);
}
