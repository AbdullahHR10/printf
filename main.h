#ifndef MAIN_HEADER
#define MAIN_HEADER

#include <stdio.h>
#include <stdarg.h>

/**
 * struct format_specifier - Structure that holds a format specifier.
 * and its corresponding function to print the formatted output.
 *
 * @specifier: A character representing the format specifier.
 * @print_function: A pointer to the function that handles printing the data.
 */

typedef struct format_specifier {
    char specifier;
    int (*print_function)(va_list *args);
} format_specifier_t;

int _printf(const char *format, ...);

int _putchar(char c);
int print_char(va_list *args);
int print_string(va_list *args);
int print_int(va_list *args);

#endif