#include "main.h"

/**
 * _strpbrk - search a string for any of a set of bytes
 *
 * @s: string
 * @accept: string to match
 *
 * Return: Pointer to the byte in s that matches one of the bytes in accept
 *	or NULL if no such byte is found
*/

char *_strpbrk(char *s, char *accept)
{
	int iter, jter;
	char *p;

	iter = 0;

	while (s[iter] != '\0')
	{
		jter = 0;
		while (accept[jter] != '\0')
		{
			if (accept[jter] == s[iter])
			{
				p = &s[iter];
				return (p);
			}
			jter++;
		}
		iter++;
	}
	return (0);
}
