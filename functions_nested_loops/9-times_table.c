#include "main.h"
/**
 *times_table - prints the 9 tables, starting with 0
 *
 *Return: 0
 */

void times_table(void)
{
	int a = 0;
	int b = 0;
	int c;

	while (a <= 9)
	{
		while (b <= 9)
		{
			c = a * b;
			if (c <= 9 && b > 0)
			{

				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(c + '0');
			}
			else if (c >= 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(c / 10 + '0');
				_putchar(c % 10 + '0');
			}
			else if (b == 0)
			{
				_putchar(c + '0');
			}

			b = b + 1;
		}
		_putchar('\n');
		a = a + 1;
		b = 0;
	}
}

