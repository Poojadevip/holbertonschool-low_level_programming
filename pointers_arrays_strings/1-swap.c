#include "main.h"

/**
 * swap_int - A function that swaps the values of two integers.
 *
 * @a: int interger a
 * @b: int integer b
 *
 * Return: 0
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}

