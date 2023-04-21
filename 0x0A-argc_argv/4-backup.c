#include <stdlib.h>
#include <stdio.h>

/**
 * main - Write a program that adds positive numbers.
 *
 * Print the result, followed by a new line
 * If no number is passed to the program, print 0, followed by a new line
 * If one of the number contains symbols that are not digits, print Error, follo * wed by a new line, and return 1
 * You can assume that numbers and the addition of all the numbers can be stored * in an int
 *
 * @argc: This is the argument count
 * @argv: This is the argument vector
 *
 * Return: This return to 1 if error else 0
 */
int main(int argc, char* argv[])
{
	int i, sum;
       
	sum = 0;

	for (i = 1; i < argc; i++)
	{
		if (i == 0)
		{
			printf("%d\n", i);
		}
		if ((*argv[i] >= 'a' && *argv[i] <= 'z') || (*argv[i] >='A' && *argv[i] <='Z'))
		{
			printf("Error\n");
			return (1);
		}
		else
		{
			sum += atoi(argv[i]);
		}
	}
	printf("%d\n", sum);
	return (0);
}
