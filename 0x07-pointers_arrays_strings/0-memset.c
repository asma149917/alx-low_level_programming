#include "main.h"

/**
 * _memset - fills memory with a constant byte
 *
 * @s: pointer to put the constant
 * @b: byte
 * @n: max bytes to use
 *
 * Return: Pointer s
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int iter;

	for (iter = 0; n > 0; iter++, n--)
	{
		s[iter] = b;
	}
	return (s);
}
