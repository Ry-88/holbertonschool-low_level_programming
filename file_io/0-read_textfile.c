#include "main.h"
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

/**
 * read_textfile - Reads a text file and prints it to POSIX standard output
 * @filename: Name of the file to read
 * @letters: Maximum number of letters to read and print
 * Return: The actual number of letters read and printed
 *         or 0 on failure
 */
size_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	size_t bytes_read, bytes_written;
	char *buffer;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buffer = malloc(letters);
	if (buffer == NULL)
	{
		close(fd);
		return (0);
	}

	bytes_read = read(fd, buffer, letters);
	if (bytes_read <= 0)
	{
		free(buffer);
		close(fd);
		return (0);
	}

	bytes_written = write(STDOUT_FILENO, buffer, bytes_read);
	free(buffer);
	close(fd);

	if (bytes_written != bytes_read)
		return (0);

	return (bytes_written);
}
