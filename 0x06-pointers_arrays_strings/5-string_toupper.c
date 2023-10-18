#include "main.h"

/**
 * string_toupper - function that chnages all
 *		lowercase of string to uppercase letters
 *
 * @str: string to be changed
 *
 * Return: pointer to the changed string
*/

char *string_toupper(char *str)
{
	int index = 0;

	while (str[index])
	{
		if (str[index] >= 'a' && str[index] <= 'z')
			str[index] -= 32;
		index++;

	}

		return (str);
}
