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
	for (c -= 1; c >= 0; c--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
