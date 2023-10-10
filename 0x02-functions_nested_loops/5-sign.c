#include "main.h"

/**
 * print_sign - function that compares the sign of a number
 * given by the user
 *
 * @n:  the input taken from the user
 *
 * Return: 1 if the n is greater than zero,
 *	0 if the n is zero,
 *	-1 if the n is less than zero
*/

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	else
	{
		_putchar (45);
		return (-1);
	}
}
