#include <stdio.h>

/**
 *main - print all combinations of three different digits
 *Return: Always 0 (Success)
 */

int main(void)
{
	int One;
	int Ten;
	int Hundred;

	for (Hundred = '0'; Hundred <= '9'; Hundred++) /*Hundreds place*/
	{
		for (Ten = (Hundred + 1); Ten <= '9'; Ten++) /*Tens=100s+1*/
		{
			for (One = (Ten + 1); One <= '9'; One++) /*Ones*/
			{
				putchar(Hundred);
				putchar(Ten);
				putchar(One);
				if (Hundred != '7' || Ten != '8' || One != '9')
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');

	return (0);
}

