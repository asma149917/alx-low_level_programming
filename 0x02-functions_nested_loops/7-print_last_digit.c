#include "main.h"

/**
 * print_last_digit - last digit of the input taken by user
 *
 * @n: takes input in integer types for funtion
 *
 * Return: lastDigit
*/
int print_last_digit(int n)
{
	int lastDigit;

	if (n < 0)
		lastDigit = (-1)  * (n % 10);
	else
		lastDigit = n % 10;
	_putchar(lastDigit + '0');
	return (lastDigit);
}
