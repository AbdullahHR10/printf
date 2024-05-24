#include "main.h"

/**
 * print_string - Prints a string for a custom printf function
 * @s: String to be printed
 *
 * Return: Nothing
 */

void print_string(char *s)
{
	int i;

	for (i = 0; i < strlen(s); i++)
		_putchar(s[i]);
}
