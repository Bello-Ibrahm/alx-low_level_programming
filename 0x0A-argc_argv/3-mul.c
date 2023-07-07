#include <stdio.h>
#include <stdlib.h>
/**
 * main - Program that multiplies two numbers.
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0;
 */
int main(int argc, char *argv[])
{
	int i, multiplication;
	int retval = 0;

	multiplication = 1;
	if (argc != 3)
	{
		printf("Error\n");
		retval = 1;
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			multiplication *= atoi(argv[i]);
		}
		printf("%d\n", multiplication);
	}
	return (retval);
}

