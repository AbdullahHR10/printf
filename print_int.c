#include "main.h"

/**
 * print_int - Prints an integer for a custom printf function
 * @i: Integer to be printed
 *
 * Return: Number of digits
 */

int print_int(int i)
{
	int count = 0, index = 0;
	unsigned int n;
	char buffer[10];

	if (i < 0)
	{
		_putchar('-');
		n = -i;
		count++;
	}
	else
		n = i;
	if (n == 0)
	{
		_putchar('0');
		return (1);
	}
	while (n != 0)
	{
		buffer[index] = (n % 10) + '0';
		n /= 10;
		index++;
	}
	while (index > 0)
	{
		--index;
		_putchar(buffer[index]);
		count++;
	}
	return (count);
}
