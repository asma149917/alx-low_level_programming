#include "main.h"

/**
 * print_rev - prints the string in reverse order followed by newline
 *
 * @s: pointer to string to print
 *
 * Return: Void
*/

void print_rev(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;
	for (i -= 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
