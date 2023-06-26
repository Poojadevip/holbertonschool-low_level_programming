#include "main.h"
/**
 *print_numbers - func prints numbers from 0-9 followed by newline
 *
 *Return: void
 */

void print_numbers(void)
{
	int i;

	for (i = '0'; i <= '9' ; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
