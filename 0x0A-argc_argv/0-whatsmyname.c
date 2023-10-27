#include <stdio.h>

/**
 * main - program that prints the program name followed by a n ew line
 *
 * @argc: int
 * @argv: list
 *
 * Return: Always 0 (Success)
*/

int main(int argc, char *argv[])
{
	(void)argc;

	printf("%s\n", argv[0]);

	return (0);
}
