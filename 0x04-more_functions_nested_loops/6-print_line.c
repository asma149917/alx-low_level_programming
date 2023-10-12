#include "main.h"

/**
 * print_line - prints a line with n length
 *
 * @n: input for the function indicating the number of
 *	times '_' should be printed
 *
 * Return: Void
*/

void print_line(int n)
{
	int lnChr;

	if (n < 0)
		_putchar('\n');
	else
	{
		for (lnChar = 1; lnChar <= n; lnChr++)
			_putchar('_');
		_putchar('\n');
	}
}
