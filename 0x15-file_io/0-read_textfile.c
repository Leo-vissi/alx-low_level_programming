#include "main.h"
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: name of the file to pointer
 * @letters: number of letters it should read and print
 *
 * Return: actual number of letters it could read & print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, len;
	char *buffer;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buffer = malloc(letters * sizeof(char));
	if (buffer == NULL)
		return (0);

	len = read(fd, buffer, letters);
	if (write(STDOUT_FILENO, buffer, len) != len)
		return (0);

	close(fd);
	free(buffer);

	return (len);
}
