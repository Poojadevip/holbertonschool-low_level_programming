#include "main.h"
/**
 * _strchr - function that locates a character in a string.
 * @c: character first occurrence
 * @s: string
 *
 *  Return:pointer string or null character is not found
 */

char *_strchr(char *s, char c)
{
	int i;

	i = 0;
	while (s[i] >= '\0')
	{
		if (s[i] == c)
		{
			return (&s[i]);
		}
		i = i + 1;
	}
	return ('\0');
}
