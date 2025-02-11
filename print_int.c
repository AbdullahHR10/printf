#include "main.h"

/**
 * print_int - Prints an integer in _printf.
 *
 * @args: list of args.
 * Return: The length of the integer.
 */

int print_int(va_list *args) {
    int int_count = 0, num, index = 0;
    char buffer[12];

    num = va_arg(*args, int);

    if (num == 0) {
        _putchar('0');
        return (1);
    }

    if (num < 0) {
        _putchar('-');
        num = -num;
        int_count++;
    }

    while (num > 0) {
        buffer[index++] = (num % 10) + '0';
        num /= 10;
    }

    while (index > 0) {
        _putchar(buffer[--index]);
        int_count++;
    }

    return (int_count);
}