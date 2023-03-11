#include <stdlib.h>
#include <stdio.h>

/**
 * main - Write a program that multiplies two numbers.
 * 
 * Your program should print the result of the multiplication, followed by a new line
 * You can assume that the two numbers and result of the multiplication can be stored in an integer
 * If the program does not receive two arguments, your program should print Error, followed by a new line, and return 1
 *
 * @argc: This is the argument count
 * @argv: This is the argument vector
 *
 * Return: This return to 0
 */
int main(int argc, char* argv[])
{
	int i; 	
	int sum = 1;	
	
	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			sum *= atoi(argv[i]);
		}
		printf("%d\n", sum);
		return 0;
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
