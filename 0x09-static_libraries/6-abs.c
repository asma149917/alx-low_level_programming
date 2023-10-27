#include "main.h"

/**
 * _abs - function that computes the absolutes value of a number
 *
 * @n: takes the input as integer type for function
 *
 * Return: The abs value of n
*/

int _abs(int n)
{
	if (n < 0)
		n = (-1) * n;

	return (n);
}
