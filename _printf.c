#include "main.h"

/**
 * _printf - Custom printf function
 * @format: Character string  composed of 0 or more directives
 *
 * Return: The number of characters printed,
 * Excluding the null byte used to end output to strings
 */

int _printf(const char *format, ...)
{
	int count = 0;
	va_list args;

	if (format == NULL)
		return (-1);
	va_start(args, format);
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			switch (*format)
			{
				case 'c':
					count += print_char(va_arg(args, int));
					break;
				case 's':
					count += print_string(va_arg(args, char *));
					break;
				case 'd':
				case 'i':
					count += print_int (va_arg(args, int));
					break;
				case '%':
					_putchar('%');
					count++;
					break;
				case '\0':
					_putchar('%');
					break;
				default:
					_putchar('%');
					_putchar(*format);
					count += 2;
			}
		} else
		{
			_putchar(*format);
			count++;
		}
		format++;
	}
	va_end(args);
	return (count);
}
