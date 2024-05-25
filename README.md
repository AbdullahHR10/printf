<h1>ALX SE Programme Project 0x11 - C printf</h1>

![Static Badge](https://img.shields.io/badge/C-00599C?&logo=c&logoColor=white) ![Static Badge](https://img.shields.io/badge/AbdullahHR10-%230359AE?logo=Github&logoColor=%23000000)

This project contains a custom implementation of the `printf` function in the C programming language.

The `_printf` function, implemented across multiple source files, mirrors the behavior of the standard `printf` function while allowing for customization and extension. This project provides an opportunity to explore various aspects of C programming, including string manipulation, memory management, and file I/O.

Note that `_printf` function supports only these format specifiers: `%c`, `%s`, `%d`, and `%i`.

---

| Files | Description |
|-------|-------------|
| [_printf.c](./_printf.c) | Custom `printf` function that mimics the behavior of the standard `printf`. |
| [main.h](./main.h) | Header file containing prototypes and library inclusions. |
| [_putchar.c](./_putchar.c) | Custom `putchar` function used by the `_printf` function for output. |
| [print_char.c](./print_char.c) | Prints a single character when the `%c` format specifier is encountered. |
| [print_string.c](./print_string.c) | Print a string when the `%s` format specifier is encountered. |
| [print_int.c](./print_int.c) | Prints an integer when the `%d` or `%i` format specifier is encountered. |
