#include "main.h"

/**
 * print_diagonal - print a diagonal line
 *
 * @n: input of the number f times \ should be printed
 *
 * Return: Void
*/

void print_diagonal(int n)
{
	int pos, space;

	if (n <= 0)
		_putchar('\n');
	else
		for (pos = 0; pos < n; pos++)
		{
			for (space = 0; space < pos; space++)
				_putchar(' ');
			_putchar(92); /*This is ASCII of '/' char*/
			_putchar('\n');
		}
}
