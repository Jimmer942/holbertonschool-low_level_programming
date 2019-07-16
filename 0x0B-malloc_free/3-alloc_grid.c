#include <stdlib.h>
#include "holberton.h"
/**
 * alloc_grid -is a function that returns a pointer to a 2 dimensional
 * array of integers.
 * @width: width of the matrix.
 * @height: heigth of the matrix.
 * Return:  return NULL on failure
 * If width or height is 0 or negative, return NULL
 */
int **alloc_grid(int width, int height)
{
	int i, j, k;
	void **p = NULL;
	int  **ch;

	if (width >= 1 && height >= 1)
	{
		p = malloc(height * sizeof(int *));
		if (p == NULL)
		{
			return (NULL);
		}
		else
		{
			for (i = 0; i < height; i++)
				p[i] = malloc(width * sizeof(int));
			if (p != NULL)
			{
				ch = (int **) p;
				for (i = 0; i < height; i++)
					for (j = 0; j < width; j++)
						ch[i][j] = 0;
				return (ch);
			}
			else
			{
				for (k = 0; k < i; k++)
					free(p[k]);
				free(p);
				return (NULL);
			}
		}
	}
	else
	{
		return (NULL);
	}
}
