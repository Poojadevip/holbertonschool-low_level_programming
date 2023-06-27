#include "main.h"

/**
 * _strlen -- A function that returns the length of a string.
 *
 * @s: Input string
 *
 * Return: Results
 */
int _strlen(char *s)
{
	int len;

	len = 0;
	while (s[len] != '\0')
	{
		len = len + 1;
	}
	return (len);
}
