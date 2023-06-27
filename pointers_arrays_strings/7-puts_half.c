#include "main.h"
#include <string.h>

/**
* puts_half - prints half of a string
* @str: chari
*
* Return: nothing
*/
void puts_half(char *str)
{
	int length = strlen(str);
	int start = (length - 1) / 2 + 1;

	while (str[start] != '\0')
	{
		_putchar(str[start]);
		start++;
	}
	_putchar('\n');
}
