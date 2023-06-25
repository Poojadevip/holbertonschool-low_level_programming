#include "main.h"
/**
 *print_sign - prints the sign of a number
 *@n: the input number as an integer
*parameter: accepts the value
 *Return: 1 is greater than 0, return 0 is 0, return -1 if lessthan 0
 */

int print_sign(int n)
{
	if (n > 0)
		{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
	_putchar('\n');
}
