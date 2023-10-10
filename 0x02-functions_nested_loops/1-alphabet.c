#include "main.h"

/**
 * print_alphabet - utilizes the _putchar function to print the alphabet a - z
 *
 * Return: Void
*/

void print_alphabet(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		_putchar(ch);
	_putchar('\n');
}
