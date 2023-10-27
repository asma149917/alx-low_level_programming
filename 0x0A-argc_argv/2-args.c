#include <stdio.h>

/**
 * main - printsall the arguments passed to it
 *
 * @argc: int
 * @argv: list
 *
 * Return: Always 0 (Success)
*/

int main(int argc, char const *argv[])
{
	int i = 0;

	while (argc--)
	{
		printf("%s\n", argv[i]);
		i++;
	}

	return (0);
}
