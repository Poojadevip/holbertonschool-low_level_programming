#include <stdio.h>
/**
 *main - print the lowercase laphabet in reverse followed by newline
 *using only putchar twice
 *
 *Return: 0
 */

int main(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
		putchar (n + 48);
	}

	putchar('\n');

	return (0);
}
