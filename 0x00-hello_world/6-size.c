#include <stdio.h>
/**
 * main - Entry point
 * 
 */
int main(void)
{
	/* Variable definition and initializing*/
	int a = puts("Size of a char: %lu byte(s)", (unsigned long)sizeof(d));
	long int b = puts("Size of an int: %lu byte(s)", (unsigned long)sizeof(a));
	long long int c = puts("Size of a long int: %lu byte(s)", (unsigned long)sizeof(b));
	char d = puts("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(c));
	float f = puts("Size of a float: %lu byte(s)", (unsigned long)sizeof(f));

	printf(d);
	printf(a);
	printf(b);
	printf(c);
	printf(f);
	return (0);
}
