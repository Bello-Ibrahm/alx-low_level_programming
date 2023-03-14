#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - Prints coins left
 * @argc: Parameter counter
 * @argv: Vector of arguments
 * Return: always 0
 */
int main(int argc, char *argv[])
{
        int money, coins = 0;

        if (argc == 2)
        {
                if (strchr(argv[argc - 1], '-'))
                {
                        printf("%d\n", 0);
                        return (1);
                }

                money = atoi(argv[argc - 1]);

                while (money > 0)
                {
                        if (money % 25 == 0)
                        {
                                money -= 25;
                        } else if (money % 10 == 0)
                        {
                                money -= 10;
                        } else if (money % 5 == 0)
                        {
                                money -= 5;
                        } else if (money % 2 == 0)
                        {
                                money -= 2;
                        } else
                        {
                                money--;
                        }
                        coins++;
                }
                printf("%d\n", coins);
                return (0);
        }
        printf("%s\n", "Error");
       return (1);
}

