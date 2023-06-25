#include "main.h"
/**
*print_Alphabet -  prints the alphabet, in lowercase
*
*return: Always 0 (Sucuess)
*/

void print_alphabet(void)
{
	int i;

	for (i = 97; i <= 122; i++)
	{
		_putchar(i);
	}

	_putchar('\n');
}	
