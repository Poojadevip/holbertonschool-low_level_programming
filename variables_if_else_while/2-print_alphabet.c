#include <stdio.h>
#include <stdlib.h>
/**
*main - prints the alphabet in lowercase, followed by a new line
*
*Return: 0
*/


int main(void)
{
	char Alphabet = 'a';


	while (Alphabet <= 'z')
	{
		putchar(Alphabet);
		Alphabet = Alphabet + 1;
	}
	putchar('\n');

	return (0);
}
