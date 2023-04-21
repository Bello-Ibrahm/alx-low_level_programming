#include "main.h"
/**
 * append_text_to_file - Appends to file
 * @filename: Name of file
 * @text_content: content of text
 * Return: Integer value
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, bytes_len = 0;
	long int bytes_written;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_RDWR | O_APPEND);
	if (text_content != NULL)
	{
		while (text_content[bytes_len])
			bytes_len++;
		bytes_written = write(fd, text_content, bytes_len);
		if (bytes_written == -1)
			return (-1);
	}
	close(fd);
	return (1);
}
