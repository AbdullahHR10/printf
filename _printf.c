#include <stdarg.h>
#include <unistd.h>

int _putchar(char c) {
    return write(1, &c, 1);
}

int _printf(const char *format, ...) {
    int count = 0;
    va_list args;

    va_start(args, format);

    while (*format != '\0') {
        if (*format == '%') {
            format++;
            if (*format == '\0') {
                break;
            }

            if (*format == 'c') {
                char ch = va_arg(args, int);
                count += _putchar(ch);
            } else if (*format == 's') {
                char *str = va_arg(args, char*);
                if (str == NULL) {
                    str = "(null)";
                }
                while (*str != '\0') {
                    count += _putchar(*str);
                    str++;
                }
            } else if (*format == '%') {
                count += _putchar('%');
            } else {
                count += _putchar('%');
                count += _putchar(*format);
            }
        } else {
            count += _putchar(*format);
        }

        format++;
    }

    va_end(args);

    return count;
}
