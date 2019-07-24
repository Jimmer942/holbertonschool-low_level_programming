#include "3-calc.h"
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
	int (*operation)(int, int);
	int ans;

	if (argc == 4)
	{
		operation = get_op_func(*(argv + 2));
		if (operation != NULL)
		{
			ans = operation(atoi(argv[1]), atoi(argv[3]));
			printf("%d\n", ans);
		}
		else
		{
			printf("Error\n");
			exit(99);
		}
	}
	else
	{
		printf("Error\n");
		exit(98);
	}
	return (0);
}
