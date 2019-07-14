#include <stdio.h>
#include <stdlib.h>
/**
 * main - is a program that prints its name, followed by a new line.
 * @argc: argument count or size of arguments.
 * @argv: argument vector
 * Return: always 0.
 */
int main(int argc, char *argv[])
{
	printf("%s\n", *argv);
	(void) argc;
	return (0);
}
