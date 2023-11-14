#include "main.h"
#include <stdarg.h>
#include <unistd.h>

/**
 * _putchar - Writes a character to stdout.
 * @c: The character to be written.
 * Return: On success, 1 is returned. On error, -1 is returned.
 */
int _putchar(char c) {
    return write(1, &c, 1);
}

/**
 * _printf - Custom printf function.
 * @format: The format string.
 * Return: The number of characters printed (excluding the null byte).
 */
int _printf(const char *format, ...) {
    int count = 0;
    va_list args;

    va_start(args, format);

    while (*format) {
        if (*format == '%') {
            format++;
            if (*format == '\0') {
                break; // Handle case where '%' is at the end of the format string
            }

            if (*format == 'c') {
                count += _putchar(va_arg(args, int));
            } else if (*format == 's') {
                char *str = va_arg(args, char*);
                if (str == NULL) str = "(null)";
                while (*str) count += _putchar(*str++);
            } else if (*format == 'd' || *format == 'i') {
                int num = va_arg(args, int);
                int temp = num;

                if (num < 0) {
                    count += _putchar('-');
                    temp = -temp;
                }

                int length = 0;
                while (temp != 0) {
                    length++;
                    temp /= 10;
                }

                while (length > 0) {
                    int divisor = 1;
                    for (int i = 1; i < length; i++) {
                        divisor *= 10;
                    }

                    count += _putchar((num / divisor) + '0');
                    num %= divisor;
                    length--;
                }
            }
        } else {
            count += _putchar(*format);
        }

        format++;
    }

    va_end(args);

    return count;
}

