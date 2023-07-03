#include "main.h"

/**
 * _strcmp - A function that compares.
 *
 * @s1: string 
 * @s2: string 
 *
 * Return: 0
 */

int _strcmp(char *s1, char *s2)
{
	int x;
	int comp;

	x = 0;
	comp = 0;
	while (s1[x] != '\0' && comp == 0)
	{
		comp = s1[x] - s2[x];
		x = x + 1;
	}
	return (comp);
}
