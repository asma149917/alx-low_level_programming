#include "main.h"

/**
 * _puts - prints a string followed by newline to stdout
 *
 * @str: The string to print
 *
 * Return: Void
*/

void _puts(char *str)
{
	for ( ; *str != '\0'; str++)
	{
		_putchar(*str + 0);
		str++;
	}
	_putchar('\n');
}
