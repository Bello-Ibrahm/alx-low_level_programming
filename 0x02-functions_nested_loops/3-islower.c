#include "main.h"
/** 
 * _islower - main function check for lowercase letter
 *
 * @c: Charaacter to compare
 *
 * Return: Return 1 if true, 0 at false
 *
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	return (0);
}
