#include <stdio.h>

/**
 * main - prints name of program
 * @argc: number of command libe arguments
 * @argv: An array containing te program command line arguments
 *
 * Return: Always success
 */

int main(int argc, char *argv[])
{
	if (argc > 0)
		printf("%s\n", argv[0]);

	return (0);
}
