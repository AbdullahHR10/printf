#include "main.h"

/**
 * print_string - Prints a string for a custom printf function
 * @s: String to be printed
 *
 * Return: String length
 */

int print_string(char *s)
{
	int count = 0;

	if (s == NULL)
		s = "(null)";
	while (*s)
	{
		_putchar(*s);
		count++;
		s++;
	}
	return (count);
}
