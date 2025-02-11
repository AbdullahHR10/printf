#include "main.h"

format_specifier_t specifiers[] = {
    {'c', print_char},
    {'s', print_string},
    {'d', print_int}, {'i', print_int},
    {0, NULL}
};

/**
 * _printf - Function that mimics printf.
 *
 * @format: Format specifier.
 * Return: 1 on success.
 */

int _printf(const char *format, ...) {
    va_list args;
    int i, j, char_count = 0;
    char specifier;

    if (format == NULL)
        return (-1);

    va_start(args, format);
    for (i = 0; format[i] != '\0'; i++) {
        if (format[i] == '%') {
            i++;

            if (format[i] == '\0')
                return (-1);

            if (format[i] == '%') {
                _putchar(format[i]);
                char_count++;
                continue;
            }
            specifier = format[i];
            j = 0;
            /* Loop through the specifiers array */
            while (specifiers[j].specifier != 0) {
                if (specifiers[j].specifier == specifier) {
                    char_count += specifiers[j].print_function(&args);
                    break;
                }
                j++;
            }
            if (specifiers[j].specifier == 0) {
                _putchar('%');
                _putchar(specifier);
                char_count += 2;
            }
        } else {
            _putchar(format[i]);
            char_count++;
        }
    }
    va_end(args);
    return (char_count);
}