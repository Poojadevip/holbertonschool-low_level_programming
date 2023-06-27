#include "main.h"
/**
 *_puts - prints a string, followed by a new line to stdout
 *@str: character
 *Return: nothing
 */

void _puts(char *str)
{
	int l;

	l = 0;

	while (str[l] != '\0')

	{
		_putchar(str[l]);
		l = l + 1;
	}
	_putchar('\n');
}
