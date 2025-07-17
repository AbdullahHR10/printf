#include "main.h"

/**
 * print_hex_digit - Prints the two-digit uppercase hexadecimal representation
 *
 * @str: The byte value to print in hexadecimal.
 * Return: Nothing (void).
 */

void print_hex_digit(char str) {
    int high = str / 16, low = str % 16;

    if (high < 10)
        _putchar(high + '0');
    else
        _putchar(high - 10 + 'A');

    if (low < 10)
        _putchar(low + '0');
    else
        _putchar(low - 10 + 'A');
}

/**
 * print_special_string - Prints a special string in _printf.
 *
 * @args: list of args.
 * Return: The length of the string.
 */


int print_special_string(va_list *args) {
    char *str;
    int char_count = 0;
    str = va_arg(*args, char *);

    /* Handle null strings */
    if (str == NULL) {
        str = "(null)";
    }

    /* Loop through the string and print each character using _putchar */
    while (*str) {
        if ((*str < 32) || (*str >= 127))
        {
            _putchar('\\');
            _putchar('x');
            print_hex_digit(*str);
            char_count += 4;
        } else {
            _putchar(*str);
            char_count++;
        }
        str++;
    }
    return (char_count);
}