#include "main.h"

/**
 * _strchr - fills memory with constant byte
 *
 * @s: pointer to put the constant
 * @c: constant
 *
 * Return: pointer to s
*/

char *_strchr(char *s, char c)
{
	int iter;

	for (iter = 0; s[iter] >= '\0'; iter++)
	{
		if (s[iter] == c)
			return (s + iter);
	}

	return ('\0');
}
