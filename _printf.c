#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _printf - custom printf function
 * @format: format
 * Return: Count
 */

int _printf(const char *format, ...)
{
	int count = 0;
	va_list args;
	char *str;

	va_start(args, format);
	str = va_arg(args, char*);
	while (*format != '\0')
	{

		if (*format == '%')
		{
			format++;
			count++;
			if (*format == 'c')
			{
				_putchar(va_arg(args, int));
				count++;
			}
			else if (*format == 's')
			{
				while (*str != '\0')
				{
					print_string(*str);
					str++;
					count++;
				}
			}

		}
		else
		{
			_putchar(*format);
		}
		format++;
	}
	va_end(args);
	return (count);
}
