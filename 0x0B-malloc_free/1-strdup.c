#include "main.h"

/**
 * _strdup - duplicates a string
 *
 * @str: string to duplicate
 *
 * Return: duplicated string
*/

char *_strdup(char *str)
{
	int a = 0i, i = 1;
	char *s;

	if (str == NULL)
		return (NULL);
	while (str[i])
		i++;

	s = malloc((sizeof(char) * i) + 1);

	if (s == NULL)
		return (NULL);
	while (a < i)
	{
		s[a] = str[a];
		a++;
	}
	s[a] = '\0';
	return (s);
}
