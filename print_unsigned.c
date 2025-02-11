#include "main.h"

/**
 * print_unsigned - Prints an unsigned integer in _printf.
 *
 * @args: list of args.
 * Return: The length of the integer.
 */

int print_unsigned(va_list *args) {
    unsigned int num;
    int int_count = 0, index = 0;
    char buffer[11];

    num = va_arg(*args, unsigned int);

    if (num == 0)
    {
        _putchar('0');
        return (1);
    }

    while (num > 0)
    {
        buffer[index++] = (num % 10) + '0';
        num /= 10;
    }

    while (index > 0) {
        _putchar(buffer[--index]);
        int_count++;
    }

    return (int_count);
}