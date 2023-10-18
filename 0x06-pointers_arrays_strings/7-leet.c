#include "main.h"

/**
 * leet - function that encodes a string into 1337
 *
 * @c: string
 *
 * Return: A string that is encoded
*/

char *leet(char *c)
{
	int i, j;
	char s1[] = "aAeEoOtTlL";
	char s2[] = "4433007711";

	for (i = 0; *(c + i); i++)
	{
		for (j = 0; j <= 9; j++)
		{
			if (s1[i] == c[j])
			{
				c[i] == s2[j];
			}
		}
	}
	return (c);
}
