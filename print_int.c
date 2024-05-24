#include "main.h"

/**
 * print_int - Prints an integer for a custom printf function
 * @i: Integer to be printed
 *
 * Return: Number of digits
 */

int print_int(int i)
{
	int count = 0, digits[10], j;

	if (i < 0)
		_putchar('-');
	if (i == 0)
		_putchar('0');
	while(i != 0)
	{
		digits[count] = i % 10;
		i /= 10;
		count++;
	}
	for (j = count - 1; j >= 0; j--)
	{
		_putchar(digits[j] + '0');
	}
	return (count);
}
