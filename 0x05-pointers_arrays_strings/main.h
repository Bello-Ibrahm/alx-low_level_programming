#ifndef _MAIN_H_
#define _MAIN_H_

/**
 * _putchar - Writes the character c to std
 * @c: Parameter to compare
 */
int _putchar(char c);

/**
 * print_alphabet - function to print alphabet
 *
 */
void print_alphabet(void);

/**
 * print_alphabet_x10 - prints alphabet 10 times
 *
 */
void print_alphabet_x10(void);

/**
 * _islower - prints if c is lower case
 * @c: character to use
 * Return: 1 or 0
 */
int _islower(int c);

/**
 * _isalpha - prints if character is alphabet
 * @c: character to use
 * Return: 1 or 0
 */
int _isalpha(int c);
/**
 * print_sign - prints a sign based on n
 * @n: integer to input
 * Return: 1 or 0  or -1
 */
int print_sign(int n);
/**
 * _abs - gives absolute value
 * @int: integer
 * Return: integer or abs value of int
 */
int _abs(int);
/**
 * print_last_last - prints digit last
 *
 * @int: integer to input
 * Return: last digit of integer
 */
int print_last_digit(int);
/**
 * jack_bauer - jack bauer gooo
 *
 */
void jack_bauer(void);
/**
 * times_table - times this up
 *
 *
 */
void times_table(void);
/**
 * add - adds stuff up
 *
 * @int: integers to add
 * Return: returns a sum
 */
int add(int, int);
/**
 * print_to_98 - prints to 98
 * @n: integer to start at
 *
 */
void print_to_98(int n);
/**
 * print_times_table - whatever man
 *@n: integer to put in this table
 *
 */
void print_times_table(int n);


/* 0X05. C-POINTERS, ARRAYS AND STRINGS */


/** 
 * reset_to_98 - Reset variable to 98 
 *
 * @n: Variable with pointer
 */
void reset_to_98(int *n);

/**
 * swap_int - Swaps inter values
 * @a: First integer
 * @b: Second integer
 */
void swap_int(int *a, int *b);

/**
 * _strlen - Return the length of a string
 *
 * @s: Pointer variable
 * return: Returns length
 */
int _strlen(char *s);

/**
 *
 *
 */
void _puts(char *str);

/**
 *
 *
 *
 */
void print_rev(char *s);

/**
 *
 *
 *
 *
 */
void rev_string(char *s);

/**
 *
 *
 *
 */
void puts2(char *str);

/**
 *
 *
 *
 *
 */
void puts_half(char *str);

/**
 *
 *
 *
 *
 */
void print_array(int *a, int n);

/**
 *
 *
 *
 *
 */
char *_strcpy(char *dest, char *src);

#endif
