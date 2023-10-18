#include "main.h"

/**
 * rot13 - function that encodes a string
 *
 * @s: pointer to string to be encoded
 *
 * Return: The encoded string
*/

char *rot13(char *s)
{
	int i, j;
	char data1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char DATA1[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (s[i] == data1[j])
			{
				s[i] = DATA1[j];
				break;
			}
		}
	}
	return (s);
}
