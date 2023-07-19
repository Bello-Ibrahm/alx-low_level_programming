#include <stdlib.h>
#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - Prints the name
 *
 * @name: name argument to print
 * @f:  Pointer to function
 */

void print_name(char *name, void (*f)(char *))
{
	if ((name != NULL) && (f != NULL))
		f(name);
}

