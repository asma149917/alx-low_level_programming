#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 *
 * @s: string
 * @accept: bytes
 *
 * Return: insigned int
*/

unsigned int _strspn(char *s, char *accept)
{
	unsigned int iter, jter;

	for (iter = 0; s[iter] != '\0'; iter++)
	{
		for (jter = 0; accept[jter] != s[iter]; jter++)
		{
			if (accept[jter] == '\0')
				return (iter);
		}
	}

	return (iter);
}
