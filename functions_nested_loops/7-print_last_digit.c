#include "main.h"
/**
 *print_last_digit - prints the last digit
 *@d: input to be checked
 *parameter: accepts the input
 *Return: last digit of integer
 */

int print_last_digit(int n)
{
	int l;
	
	l = n % 10;
	if (l < 0)
	{
		_putchar(-l + 48);
		return (-l);
	}
	else
	{
		_putchar(l + 48);
		return (l);
	}
}
