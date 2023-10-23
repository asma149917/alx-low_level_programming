#include "main.h"
#include <stdio.h>
/**
 * _strstr -  fings teh first occurrence of a substring in a string
 *
 * @needle: substring input
 * @haystack: string input
 *
 * Return: Haystack
*/

char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *one = haystack;
		char *two = needle;

		while (*one == *two && *two != '\0')
		{
			one++;
			two++;
		}
		if (*two == '\0')
			return (haystack);
	}
	return (NULL);
}
