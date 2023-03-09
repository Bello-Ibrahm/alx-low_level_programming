#include "main.h"

/**
 * _length - Checks the length of a string
 * @s: Is the string
 * Return: Return the length of the string
 */
int _length(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _length(s + 1));
}

/**
 * checkUp - Checks if the string is palindrome
 * @i: Is the index
 * @lngt: Is the length of the string
 * @s: Is the string
 * Return: 1 if is palindrome or 0 if not
 */
int checkUp(int i, int lngt, char *s)
{
	if (lngt > 0)
	{
		if (s[i] == s[lngt])
		{
			return (checkUp(i + 1, lngt - 1, s));
		}
		else if (s[i] != s[lngt])
		{
			return (0);
		}
		else
		{
			return (1);
		}
	}
	return (1);
}

/**
 * is_palindrome - Checks if a string is a palindrome
 * @s: Is the string
 * Return: Return 1 if the string is a palindrome or 0 otherwise
 */
int is_palindrome(char *s)
{
	return (checkUp(0, _length(s) - 1, s));
}
