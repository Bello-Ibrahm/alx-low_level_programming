#include "main.h"

/**
 * read_textfile - reads a textfile
 * @filename: file to read
 * @letters: amount of bytes to read
 * Return: Printed letters count
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t bytes_read, bytes_written;
	char *buff;

	buff = (char *) malloc(sizeof(char) * letters);
	if (buff == NULL)
		return (0);
	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDWR);
	if (fd == -1)
		return (0);
	bytes_read = read(fd, buff, letters);
	if (bytes_read == -1)
		return (0);
	bytes_written = write(STDOUT_FILENO, buff, bytes_read);
	if (bytes_written == -1)
		return (0);
	/* if (close(fd) == -1) return (0); */
	close(fd);
	free(buff);
	return (bytes_written);
}
