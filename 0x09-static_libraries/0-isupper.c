#include "main.h"

/**
 * _isupper - checks if c is upper
 *
 * @c: input for alphabet
 *
 * Return: 1 if it's upper, 0 if it is otherwise
*/

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
