#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that adds positive numbers,print the
 *		 result, followed by a new line
 *
 * @argc: number of commandlne arguments
 * @argv: pointer to array to commandline arguments
 *
 * Return: Always 0 (Succes)
*/

int main(int argc, char *argv[])
{
	int sum = 0;
	char *c;

	while (--argc)
	{
		for (c = argv[argc]; *c; c++)
		{
			if (*c < '0' || *c > '9')
			{
				return (printf("Error\n"), 1);
			}
			sum = sum + atoi(argv[argc]);
		}
	}
	printf("%d\n", sum);

	return (0);
}
