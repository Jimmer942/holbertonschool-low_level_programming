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
	int i, j;
	void **p = NULL;
	int  **ch;

	if (width > 0 || height > 0)
	{
		p = malloc(width * sizeof(int *));
		if (p == NULL)
			return (*p);
		for (i = 0; i < width; i++)
			p[i] = malloc(height * sizeof(int));
		if (p != NULL)
		{
			ch = (int **) p;
			for (i = 0; i < width; i++)
				for (j = 0; j < height; j++)
					ch[i][j] = 0;
			return (ch);
		}
		else
		{
			return (*p);
		}
	}
	else
	{
		return (*p);
	}
}
