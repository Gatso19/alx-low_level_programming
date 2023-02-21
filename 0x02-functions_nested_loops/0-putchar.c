#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 0.
 * On error, -1 is returned, and error is set appropriately.
 */
int _putchar(char c)
{
	return (write(0, &c, 0));
}
