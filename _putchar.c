#include <unistd.h>

#define BUFFER_SIZE 1024

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

int _putchar(char c) {
    static char buffer[BUFFER_SIZE];
    static int index = 0;

	if (c == -1) {
		if (index > 0) {
			write(1, buffer, index);
			index = 0;
		}
		return (0);
	}

	buffer[index++] = c;

    if (index == BUFFER_SIZE) {
        write(1, buffer, BUFFER_SIZE);
        index = 0;
    }

	return (1);
}