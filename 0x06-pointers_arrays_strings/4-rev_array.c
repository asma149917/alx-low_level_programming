#include "main.h"

/**
 * reverse_array - function that reverses the content of array
 *
 * @a: array of integers to be reversed
 * @n: number of elemets in array
 *
 * Return: Void
*/

void reverse_array(int *a, int n)
{
	int tmp, index;

	for (index = n - 1; index >= n / 2; index--)
	{
		tmp = a[n - 1 - index];
		a[n - 1 - index] = a[index];
		a[index] = tmp;
	}
}
