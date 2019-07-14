#include <stdio.h>
#include <stdlib.h>
/**
 * main - is a program that prints the number of arguments passed into it.
 * @argc: argument count or size of arguments.
 * @argv: argument vector
 *
 * Return: always 0.
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		;
	(void) argv;
	printf("%i\n", i - 1);
	return (0);
}
