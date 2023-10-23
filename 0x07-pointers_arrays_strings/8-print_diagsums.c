#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonals of a square matrix
 *
 * @a: 2d array of int types
 * @size: size of square array
*/

void print_diagsums(int *a, int size)
{
	int x, n;
	int s1 = 0;
	int s2 = 0;

	for (x = 0; x <= (size * size); x = x + size + 1)
		s1 += a[x];
	for (n = size - 1; n <= (size * size) - size; n = n + size - 1)
		s2 += a[n];
	printf("%d, ", s1);
	printf("%d\n", s2);
}
