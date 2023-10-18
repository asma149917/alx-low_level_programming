#include "main.h"

/**
 * _strcpy - function that copies a string
 *
 * @dest: pointer to destination input buffer
 * @src: pointer to source input buffer
 * @n: number of bytes
 *
 * Return: @dest
*/

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];

	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
