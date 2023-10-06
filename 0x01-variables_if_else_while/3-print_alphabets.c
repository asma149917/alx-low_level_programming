#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print alphabet in lowercase then in UPPERCASE
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	char ch = 'a';
	char CH = 'A';

	/*prints a - z*/
	while (ch <= 'a')
	{
		putchar(ch);
		ch++;
	}
	/*prints A - Z*/
	while (CH <= 'A')
	{
		putchar(CH);
		CH++;
	}
	putchar('\n');

	return (0);
}
