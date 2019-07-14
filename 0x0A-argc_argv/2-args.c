#include <stdio.h>
#include <stdlib.h>
/**
 * main - is a program that prints all arguments it receives.
 * @argc: argument count or size of arguments.
 * @argv: argument vector
 * Return: always 0.
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
