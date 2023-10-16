#include "main.h"

/**
 * rev_string - prints the string in reverse order
 *
 *@s: input string parameter
 *
 * Return: Void
*/

void rev_string(char *s)
{
	int len = 0;
	int index = 0;
	char tmp;

	while (s[len])
		len++;
	for (index = len - 1; index >= len / 2; index--)
	{
		tmp = s[index];
		s[index] = s[len - index - 1];
		s[len - index - 1] = tmp;
	}
}
