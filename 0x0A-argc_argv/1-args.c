#include "main.h"
#include <stdio.h>

/**
 * main - Write a program that prints the number of arguments passed into it.
 * You should not remove the path before the name of the program
 *
 * @argc: This is the argument count
 * @argv: This is the argument vector
 *
 * Return: This return to 0
 */
int main(int argc, char **argv)
{
	UNUSED(argv);
	printf("%d\n", argc - 1);
	return (0);
}
