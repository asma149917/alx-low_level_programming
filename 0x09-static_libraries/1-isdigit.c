#include "main.h"

/**
 * _isdigit - checks if input is digit between 0 and 9
 *
 * @c: input
 *
 * Return: 1 if c is digit, 0 otherwise
*/

int _isdigit(int c)
{
	if (c >=  48 && c <= 57)
		return (1);
	else
		return (0);
}
