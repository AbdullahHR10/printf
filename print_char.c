#include "main.h"

/**
 * print_char - Prints a character in _printf.
 *
 * @args: List of args.
 * Return: 1.
 */

int print_char(va_list *args) {
    char c;

    c = va_arg(*args, int);
    _putchar(c);
    return (1);
}