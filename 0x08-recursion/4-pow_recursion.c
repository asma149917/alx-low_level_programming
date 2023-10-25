#include "main.h"

/**
 * _pow_recursion - prints the value of x raised to power y using recursion
 *
 * @x: input as a base
 * @y: input as an exponent
 *
 * Return: x^y
*/

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 1)
		return (x);
	else if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
