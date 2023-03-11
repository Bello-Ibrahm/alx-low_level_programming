#include <stdlib.h>
#include <stdio.h>

/**
 * main - Write a program that multiplies two numbers.
 * 
 * Your program should print the result of the multiplication, followed by a new * line
 * You can assume that the two numbers and result of the multiplication can be s * tored in an integer
 * If the program does not receive two arguments, your program should print Erro * r, followed by a new line, and return 1
 *
 * @argc: This is the argument count
 * @argv: This is the argument vector
 *
 * Return: This return to 1 if error else 0
 */
int main(int argc, char  *argv[])
{
	if (argc == 3)
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
		return (0);
	}
	else
		printf("Error\n");
	return (1);
}
