#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - prints the count from n to 98 in ascending or descending
 *
 * @n: input fro the user to func to count to 98
 *
 * Return: Void
*/

void print_to_98(int n)
{
	int count;

	if (n > 98)
		for (count = n; count > 98; count--)
			printf("%d, ", count);
	else
		for (count  = n; count < 98; count++)
			printf("%d, ", count);
	printf("98\n");
}
