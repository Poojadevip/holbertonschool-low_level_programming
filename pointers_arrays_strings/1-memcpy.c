#include "main.h"
/**
 * _memcpy - function that copies memory area
 * @dest: pointer to memory area
 * @src: pointer from memory area
 * @n: bytes copies freom memory
 *
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		dest[i] = src[i];
		i = i + 1;
	}
	return (dest);
}
