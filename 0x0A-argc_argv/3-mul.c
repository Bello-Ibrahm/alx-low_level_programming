#include <stdlib.h>
#include <stdio.h>

/**
 * main - Program that multiplies two numbers.
 * @argc: This is the argument count
 * @argv: This is the argument vector
 *
 * Return: 0;
 */
int main(int argc, char* argv[])
{
	int i, multiplication;
       
	multiplication = 1;
	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	for (i = 1; i < argc; i++)
	{
		multiplication *= atoi(argv[i]);
	}
	printf("%d\n", multiplication);
	return (0);
}
