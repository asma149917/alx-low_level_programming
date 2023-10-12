#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: function that prints from 1 - 100,
 *		except for multiples of 3 it prints
 *		FIZZ, and  multiples of 5 it prints BUZZ,
 *		and multiples of both it prints FizzBuzz
 * Return: Always 0 (Success)
*/

int main(void)
{
	int num;

	for (num = 1; num <= 100; num++)
	{
		if ((num % 3 == 0) && !(num % 5 == 0))
			printf("Fizz");
		else if ((num % 5 == 0) && !(num % 3 == 0))
			printf("Buzz");
		else if ((num % 3 == 0) && (num % 5 == 0))
			printf("FizzBuzz");
		else
			printf("%d", num);
		if (num != 100)
			printf(" ");
		else
			printf("\n");
	}

	return (0);
}
