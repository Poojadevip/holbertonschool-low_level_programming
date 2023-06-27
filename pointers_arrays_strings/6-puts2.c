#include "main.h"

/**
* puts2 - prints every other character of a string, starting with the
* first character, followed by a new line
* @str: char
*
* Return: nothing
*/
void puts2(char *str)
{
	int s;
	int l;

	l = 0;
	while (str[l])
	{
		l = l + 1;
	}
	s = 0;
	while (s < l)
	{
		_putchar(str[s]);
		s = s + 2;
	}
	_putchar('\n');
}
