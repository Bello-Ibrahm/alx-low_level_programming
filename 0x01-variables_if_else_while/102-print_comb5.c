#include <stdio.h>

/**
 * main - Prints numbers between 00 to 99.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int w, x, y, z, opt1, opt2;

w = x = y = z = 48;
while (z < 58)
{
	y = 48;
	while (y < 58)
	{
		x = 48;
		while (x < 58)
		{
			w = 48;
			while (w < 58)
			{
				opt1 = (z * 10) + y;
				opt2 = (x * 10) + w;
				if (opt1 < opt2)
				{
					putchar(z);
					putchar(y);
					putchar(' ');
					putchar(x);
					putchar(w);
					if (z == 57 && y == 56 && x == 57 && w == 57)
						break;
					putchar(',');
					putchar(' ');
				}
				w++;
			}
			x++;
		}
		y++;
	}
	z++;
}
putchar('\n');
return (0);
}
