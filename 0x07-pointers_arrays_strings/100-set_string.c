#include "main.h"

/**
 * set_string - sets the value of a pointer to a string
 *
 * @s: pointer to pointer
 * @to: pointer to char
 *
 * Return: Void
*/

void set_string(char **s, char *to)
{
	*s = to;
}
