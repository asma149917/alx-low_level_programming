#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print all the numbers of base 16 in lowercase for 10 - 15
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	int digit = 48; /*48 decimal represenation of 0 in ASCII*/

	while (digit <= 102) /*102 decimal rep of 'f' in ASCII*/
	{
		putchar(digit);

		/*after 9 we jump to 96*/
		if (digit == 57) /*digit = 9*/
			digit += 39; /* why not 40? because the nxt instr add 1*/
		digit++; /*1 is added and its value is printed in nxt iteration*/
	}
	putchar('\n');

	return (0);
}
