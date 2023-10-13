#include <stdio.h>

/**
 * _sqrt - finds the sqrt
 *
 * @a: input number
 *
 * Return: sqrt of x
*/
double _sqrt(double a)
{
	float sqrt, temp;

	sqrt = a / 2;
	temp = 0;
	while (sqrt != temp)
	{
		temp = sqrt;
		sqrt = (a / temp + temp) / 2;
	}
	return (sqrt);
}

/**
 * largest_prime_factor - finds and prints the largest
 *			prime factor of number (num)
 * @num: number to find
*/

void largest_prime_factor(long int num)
{
	int prmNum, largest;

	/*first divide with the smallest prime number (two)*/
	while (num % 2 == 0)
		num = num / 2;
	for (prmNum = 3 ; prmNum <= _sqrt(num); prmNum += 2)
	{
		while (num % prmNum == 0)
		{
			num = num / prmNum;
			largest = prmNum;
		}
	}
	if (num > 2)
		largest = num;
	printf("%d\n", largest);
}
/**
 * main -  Entry point
 *
 * Description: prints the largest prime factor of a number
 *
 * Return: Always 0(Sucess)
*/

int main(void)
{
	largest_prime_factor(612852475143);

	return (0);
}
