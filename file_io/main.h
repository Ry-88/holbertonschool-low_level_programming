#ifndef HEADER_FILE
#define HEADER_FILE
#include <stddef.h>
int _putchar(char c);
size_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
#endif
