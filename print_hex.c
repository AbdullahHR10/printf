#include "main.h"

/**
 * print_hex_lower - Prints an integer that is converted to hex
 * (lowercase) in _printf.
 *
 * @args: list of args.
 * Return: The length of the integer (hex).
 */

int print_hex_lower(va_list *args) {
    unsigned int num;
    int int_count = 0, index = 0, remainder;
    char buffer[9];

    num = va_arg(*args, unsigned int);

    if (num == 0)
    {
        _putchar('0');
        return (1);
    }

    while (num != 0) {
        remainder = num % 16;
        if (remainder < 10)
            buffer[index++] = remainder + '0';
        else
            buffer[index++] = remainder - 10 + 'a';
        num /= 16;
    }

    while (index > 0) {
        _putchar(buffer[--index]);
        int_count++;
    }

    return (int_count);
}

/**
 * print_hex_upper - Prints an integer that is converted to hex
 * (uppercase) in _printf.
 *
 * @args: list of args.
 * Return: The length of the integer (hex).
 */

 int print_hex_upper(va_list *args) {
    unsigned int num;
    int int_count = 0, index = 0, remainder;
    char buffer[8];

    num = va_arg(*args, unsigned int);

    if (num == 0)
    {
        _putchar('0');
        return (1);
    }

    while (num != 0) {
        remainder = num % 16;
        if (remainder < 10)
            buffer[index++] = remainder + '0';
        else
            buffer[index++] = remainder - 10 + 'A';
        num /= 16;
    }

    while (index > 0) {
        _putchar(buffer[--index]);
        int_count++;
    }

    return (int_count);
}