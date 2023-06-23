#include <stdio.h>
/**
 *main - print the alphabet in lowercase, and uppercase,
 *
 *Return: 0
 */

int main(void)
{
	char c;

	char a;

	c = 'a';
	a = 'A';
	while (c <= 'z')
	{
		putchar(c);
		c++;
	}

	while (a <= 'Z')
	{
		putchar(a);
		a++;
	}

	putchar('\n');

	return (0);
}

