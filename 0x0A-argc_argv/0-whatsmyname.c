#include <stdio.h>

/**
 * main - Prints the name of itself
 * @argc: The number of the command line arguments
 * @argv: An array of size argc
 * return: Return 0 (Success)
 */

int main(int argc, char* argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return 0;
}
