#include <stdio.h>

/**
 *main - print 0-9 separated with commas, using putchar
 *Return: Always 0 (Success)
 */

int main(void)
{
	int p = '0';

	while (p <= '9')
	{
		putchar(p);
		if (p != '9')
		{
			putchar(',');
			putchar(' ');
		}
		p++;
	}
	putchar('\n');

	return (0);
}
