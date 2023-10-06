#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print all the numbers of base 10 which is 0 - 9
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	int digit = 0;

	while (digit < 10)
	{
		printf("%i", digit);
		digit++;
	}
	printf("\n");

	return (0);
}
