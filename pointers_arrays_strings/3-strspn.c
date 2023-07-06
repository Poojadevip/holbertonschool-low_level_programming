#include <stdio.h>
#include "main.h"
/**
*_strspn - function that gets the length of a prefix substring
*is_char_in_accept - funtion for char
@c: char input
*@s: input
*@accept: number of bytes
* Return: 
*/

unsigned int is_char_in_accept(char c, char *accept)
{
	unsigned int i;

	i = 0;
	while (accept[i] !='\0')
	{
		if (c == accept[i])
		{
			return (1);
		}
		i = i + 1;
	}
       	return (0);
}

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i;
   
	i = 0;
	while (s[i] != '\0')
	{
		if (is_char_in_accept(s[i], accept) == 0)
		{
			return (i);
		}

		i = i + 1;
	}
	return (i);
}
