#include "main.h"
#include <limits.h>

/**
 * _atoi - converts a string to an integer
 * @s: char string user input
 * Return: int
 */
int _atoi(char *s)
{
	int sign = 1;
	int result = 0;
	int digit;

	while (*s == ' ')
	{
		s++;
	}
	if (*s == '-' || *s == '+')
	{
		if (*s == '-')
		{
			sign = -1;
		}
		s++;
	}
	while (*s != '\0')
	{
		if (*s < '0' || *s > '9')
		{
			break;
		}
		digit = *s - '0';
		if (result > (INT_MAX / 10) ||
				(result == (INT_MAX / 10) && digit > (INT_MAX % 10)))
		{
			if (sign == 1)
			{
				return (INT_MAX);
			}
			else
			{
				return (INT_MIN);
			}
		}
		result = (result * 10) + digit;
		s++;
	}
	return (sign * result);
}
