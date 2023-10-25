#include "main.h"

/**
 * check_prime - checks all number < n if they can divide it
 *
 * @n: int
 * @othrn: int
 *
 * Return: othern
*/

int check_prime(int n, int othrn)
{
	if (othrn >= n && n > 1)
		return (1);
	else if (n % othrn == 0 || n <= 1)
		return (0);
	else
		return (check_prime(n, othrn + 1));
}
/**
 * is_prime_number - prints 1 if n is prime number, otherwise print 0
 *
 * @n: number to check
 *
 * Return: Either 1 or 0
*/

int is_prime_number(int n)
{
	return (check_prime(n, 2));
}
