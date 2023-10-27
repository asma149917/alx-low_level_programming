#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the product of two numbers followed by newline
 *
 * @argc: number of commandline arguments
 * @argv: pointer to an array of commandline arguments
 *
 * Return: Always 0 (Success)
*/

int main(int argc, char *argv[])
{
	int sum;

	if (argc == 3)
	{
		sum = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", sum);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
