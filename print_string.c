#include "main.h"

/**
 * print_string - Prints a string for a custom printf function
 * @s: String to be printed
 *
 * Return: Nothing
 */

int print_string(char *s)
{
	int count = 0;

	while (*s)
	{
		_putchar(*s);
		count++;
		s++;
	}
	return(count);
}
