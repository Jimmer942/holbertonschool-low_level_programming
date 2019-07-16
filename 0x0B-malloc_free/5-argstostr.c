#include <stdlib.h>
#include "holberton.h"
/**
 * argstostr - function that concatenates all the arguments of your program.
 * @ac: size of av.
 * @av: arguments.
 * Return: Returns NULL if ac == 0 or av == NULL
 * Returns a pointer to a new string, or NULL if it fails
 * Each argument should be followed by a \n in the new string
 */
char *argstostr(int ac, char **av)
{
	int i, j, k;
	int size = 0;
	void *p = NULL;
	char *ch;

	if (!(ac == 0 || av == NULL))
	{
		for (i = 0; i < ac; i++)
		{
			for (j = 0; av[i][j] != '\0'; j++)
				;
			size = size + j;
		}
		p = malloc((ac + 1 + size) * sizeof(char));
		if (p != NULL)
		{
			ch = (char *) p;
			for (i = 0; i < ac; i++)
			{
				for (j = 0; av[i][j] != '\0'; j++, k++)
					ch[k] = av[i][j];
				ch[k] = '\n';
				k++;
			}
			ch[k] = '\0';
			return (ch);
		}
		else
		{
			return (NULL);
		}
	}
	else
	{
		return (NULL);
	}
}
