#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* main - multiplies two numbers and prints the result
* @argc: count of the arguments
* @argv: array of pointers to the strings
*
* Return: mul
*/
int main(int argc, char *argv[])
{
	int mul;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	mul = atoi(argv[1]) * atoi(argv[2]);
	printf("%d\n", mul);
	return (0);
}
