#include "main.h"

/**
 * print_square - prints a square of size n
 *
 * @size: input indicateing the size of square
 *
 * Return: Void
*/

void print_square(int size)
{
	int row, column;

	if (size <= 0)
		_putchar('\n');
	for (row = 1; row <= size; row++)
	{
		for (column = 1; column <= size; column++)
			_putchar(35);
		_putchar('\n');
	}
}
