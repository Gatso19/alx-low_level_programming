#include <stdio.h>

/**
 *main - print 00 to 99 with no duplicate digits or combos: no 11, no 10 (01)
 *
 *Return: Always 0 (Success)
 */

int main(void)
{
	int Ones;
	int Tens;

	for (Tens = '0'; Tens <= '9'; Tens++) /*increment Tens*/
	{
		for (Ones = (Tens + 1); Ones <= '9'; Ones++) /*One's Ten+1*/
		{
			putchar(Tens);
			putchar(Ones);

			if (Tens != '8' || Ones != '9') /*print commas*/
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');

	return (0);
}

