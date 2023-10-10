#include "main.h"

/**
 * _isalpha - prints 1  or 0
 *
 * Description: checks if the character is a letter
 *		both uppercase and lowercase
 *
 * @c: takes input from the user
 *
 * Return: 1 is c if true else 0;
*/

int _isalpha(int c)
{
	if (c >= 97 && c <= 122)
		return (1);

	if (c >= 65 && c <= 90)
		return (1);

	return (0);
}
