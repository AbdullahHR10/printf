#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * print_string - prints a string to stdout
 * @s: string to be printed
 * Return: count
 */

int print_string(char *s);
{
	int i, count;

	if (s == NULL)
	{
		return (0);
	}
	for (i = 0; s[i] != '\0'; i++)
	{
		_putchar(s[i]);
		count++;
	}
	return (count);
}
