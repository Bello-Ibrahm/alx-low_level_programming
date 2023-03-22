#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - main function
 *
 * @argc: argument count
 * @argv: argument vector(array of args)
 *
 * Return: return something
 */
int main(int ac, char *av[])
{
	int numb1, numb2;
	int (*fun)(int, int);
	char *c = av[2];

	if (ac != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if ((*c != '+' && *c != '-' && *c != '*' && *c != '/' && *c != '%') ||
			*(c + 1) != 0)
	{
		printf("Error\n");
		exit(99);
	}
	numb1 = atoi(av[1]);
	numb2 = atoi(av[3]);
	if ((*c == '/' || *c == '%') && numb2 == 0)
	{
		printf("Error\n");
		exit(100);
	}
	fun = get_op_func(c);
	printf("%d\n", fun(numb1, numb2));
	return (0);
}
