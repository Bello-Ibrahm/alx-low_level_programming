#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * string_nconcat - function that concatenates two strings.
 *
 * @s1: This is the first input string
 * @s2: This is the second input string
 * @n: This is the limit to copy the second string to the first string
 *
 * Return: This is the string joined
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j;
	char *newStr;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0; s1[i] != '\0'; i++)
	{
	}
	for (j = 0; s2[j] != '\0'; j++)
	{
	}
	if (n > j)
		n = j;

	newStr = malloc(((i + n) + 1));
	if (newStr == NULL)
		return (NULL);
	for (i = 0; s1[i] != '\0'; i++)
	{
		newStr[i] = s1[i];
	}
	for (j = 0; j != n; j++)
	{
		newStr[i] = s2[j];
		i++;
	}
	newStr[i] = '\0';
	return (newStr);
}

