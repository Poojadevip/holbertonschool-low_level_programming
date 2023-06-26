#include "main.h"

/**
 * print_line - prints the number of char to current line
 * @n: number of time character should print
 * @j: Integerprint_line
 * Return: 0
 */

void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	} else
	{
		int j;

	for (j = 1; j <= n; j++)

	{
		_putchar('_');
	}
	_putchar('\n');
	}
}
