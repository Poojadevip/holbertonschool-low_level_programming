#include "main.h"
/**
 *rev_string - reverses a string
 *@s: character
 *Return: nothing
 */

void rev_string(char *s)
{
	int length = 0;
	char *start = s;
	char *end = s;

	while (*end != '\0')
	{
		length++;
		end++;
	}
	end--;
	while (start < end)
	{
		char temp = *start;
		*start = *end;
		*end = temp;
		start++;
		end--;
	}
}

