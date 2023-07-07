#include <stdio.h>

/**
 * main - Write a program that prints all arguments it receives.
 * All arguments should be printed, including the first one
 * Only print one argument per line, ending with a new line
 *
 * @argc: This is the argument count
 * @argv: This is the argument vector
 *
 * Return: This return to 0
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
