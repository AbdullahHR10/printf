#include "main.h"

/**
 * print_binary - Prints an integer that is converted to binary in _printf.
 *
 * @args: list of args.
 * Return: The length of the integer (binary).
 */

int print_binary(va_list *args) {
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
        buffer[index++] = (num % 2) + '0';
        num /= 2;
    }

    while (index > 0) {
        _putchar(buffer[--index]);
        int_count++;
    }

    return (int_count);
}