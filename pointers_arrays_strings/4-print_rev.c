#include "main.h"

/**
 *print_rev - prints a string, followed by a new line to stdout
 *@s: character
 *Return: nothing
 */

void print_rev(char *s)
{
	char *l;

	l = s;
	while (*l != '\0')
	{
		l = l + 1;
	}
	l = l - 1;
	while (l >= s)
	{
		l = l - 1;
		_putchar(*l);
	}
	_putchar('\n');
}
