#include <stdio.h>
/**
 * main - Prints the name of itself
 * @argc: argument count - number of the command line arguments
 * @argv: argument vector - an array of size argc
 * 
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	printf("%s\n", argv[0]);
	(void)argc;
	return (0);
}
