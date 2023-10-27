#include "main.h"

/**
 * _memcpy - copies memory area
 *
 * @dest: memory area
 * @src: source
 * @n: length of n bytes of source to be copied
 *
 * Return: pointer to dest
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int iter;

	for (iter = 0; iter < n; iter++)
	{
		dest[iter] = src[iter];
	}

	return (dest);
}
