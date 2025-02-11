#include "main.h"

/**
 * print_octal - Prints an integer that is converted to octal in _printf.
 *
 * @args: list of args.
 * Return: The length of the integer (octal).
 */

int print_octal(va_list *args) {
    unsigned int num;
    int int_count = 0, index = 0;
    char buffer[32];

    num = va_arg(*args, unsigned int);

    if (num == 0)
    {
        _putchar('0');
        return (1);
    }

    while (num != 0) {
        buffer[index++] = (num % 8) + '0';
        num /= 8;
    }

    while (index > 0) {
        _putchar(buffer[--index]);
        int_count++;
    }

    return (int_count);
}