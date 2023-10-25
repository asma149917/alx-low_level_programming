#include "main.h"

/**
 * factorial - prints factorial of an integer
 *
 * @n: input number for factorial function
 *
 * Return: factorial number result
*/

int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 1)
		return (1);
	return (n * factorial(n - 1));
}
