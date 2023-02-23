#include "main.h"
#include <unistd.h>

/**
 * _putvhar - write the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is setnappropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
