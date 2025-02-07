#include "main.h"

/**
 * print_string - Prints a string in _printf.
 *
 * @args: list of args.
 * Return: The length of the string.
 */

int print_string(va_list *args) {
    char *str;
    int char_count;

    str = va_arg(*args, char *);
    char_count = 0;
    /* Handle null strings */
    if (str == NULL) {
        str = "(null)";
    }

    /* Loop through the string and print each character using _putchar */
    while (*str) {
        _putchar(*str);
        str++;
        char_count++;
    }
    return (char_count);
}