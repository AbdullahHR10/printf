#include <stdarg.h>
#include "main.h"

/**
 * _printf - Custom printf function
 * @format: Format string
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
            switch (*format)
            {
                case 'c':
                    _putchar(va_arg(args, int));
                    count++;
                    break;
                case 's':
                    str = va_arg(args, char*);
                    count += print_string(str);
                    break;
                default:
                    _putchar('%');
                    break;
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
