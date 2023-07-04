#include "main.h"

/**
* _memset - funtion fills memory with a constant byte
* @s: Pointer to the character
* @b: the constant byte b
* @n: bytes of memory area
*
* Return: *s
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		s[i] = b;
		i = i + 1;
	}
	return (s);
}
