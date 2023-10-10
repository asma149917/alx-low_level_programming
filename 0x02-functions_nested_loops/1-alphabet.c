#include "main.h"

/**
 * print_alphabet - utilizes the _putchar function to print the alphabet a - z
 *
 * Return: Void
*/

int print_alphabet(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		_putchar(ch);
	_putchar('\n');
}
