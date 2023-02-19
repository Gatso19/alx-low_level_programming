#include <stdio.h>

/**
 *main - print a num pair from 00-99 but no repeats (00 01, 00 02, 00 03,...)
 *Return: Always 0 (Success)
 */

int main(void)
{
	int Tens;
	int Ones;
	int T;
	int O;

	for (Tens = '0'; Tens <= '9'; Tens++) /*print first two digit combo*/
	{
		for (Ones = '0'; Ones <= '9'; Ones++)
		{
		        for (T = Tens; T <= '9'; T++) /*print second of pair*/
			{
				for (O = Ones + 1; O <= '9'; O++)
				{
					putchar(Tens);
					putchar(Ones);
					putchar(' ');
					putchar(T);
					putchar(O);

					if (!((Tens == '9' && Ones == '8') &&
					      (T == '9' && O == '9')))
					{
						putchar(',');
						putchar(' ');
					}
				}
				O = '0';
			}
		}
	}
	putchar('\n');

	return (0);
}

