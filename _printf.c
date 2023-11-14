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
                str = va_arg(args, char*);
                count += print_string(str);
            }
            else
            {
                _putchar(*format);
            }
        }
        else
        {
            _putchar(*format);
        }
        format++;
    }

    va_end(args);
    return count;
}

