#include "main.h"

/**
 * main - Program to copy file From - To
 * @argc: Argument count
 * @argv: Array of arguments
 * Return: Return a value
 */

int main(int argc, char *argv[])
{
	int fd_From, fd_To, bytes_written, bytes_read;
	char buff[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fd_From = open(argv[1], O_RDONLY);
	if (fd_From == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	fd_To = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (fd_To == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	while ((bytes_read = read(fd_From, buff, 1024)) > 0)
	{
		bytes_written = write(fd_To, buff, bytes_read);
		if (bytes_written == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
	}
	if (bytes_read == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (close(fd_From) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d", fd_From);
		exit(100);
	}
	if (close(fd_To) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d", fd_To);
		exit(100);
	}
	return (0);
}


