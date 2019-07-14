#include <stdio.h>
#include <stdlib.h>
/**
 * main - a program that multiplies two numbers.
 * @argc: argument count or size of arguments.
 * @argv: argument vector
 * Return:  0.
 */
int main(int argc, char *argv[])
{
	int mul;

	if (argc == 3)
	{
		mul = atoi(*(argv + 1)) * atoi(*(argv + 2));
		printf("%i\n", mul);
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
