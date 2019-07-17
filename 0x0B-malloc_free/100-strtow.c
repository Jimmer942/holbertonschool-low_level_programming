#include <stdlib.h>
#include <stdio.h>
/**
 * free_grid -is a function that returns a pointer to a 2 dimensional
 * array of integers.
 * @grid: matrix.
 * @height: heigth of the matrix.
 */
void free_grid(char **grid, int height)
{
	int i;

	if (grid != 0)
	{
		for (i = 0; i < height; i++)
			free(grid[i]);
	}
	else
	{
	}
	free(grid);
}
/**
 * count_words - function that count words in a string
 * separated by a blank space
 * Return: number of words in the string
 * @str: pointer to the string
 */
int count_words(char *str)
{
	int words = 0;
	int flag = 0;
	int i = 0;

	while (str[i] != '\0')
	{
		if ((str[i] == ' ' || str[i + 1] == 0) && flag)
		{
			flag = 0;
			words++;
		}
		if (str[i] != ' ')
			flag = 1;
		i++;
	}
	if (str[i - 1] != ' ' && str[i - 2] == ' ')
		words++;
	if (i == 1 && *str != ' ')
		words++;
	return (words);
}
/**
 * look_pos - function that stores the begining and the end position of a word
 * in a string
 * @str: pointer to the string
 * @pos: pointer ti the array used to store the positions
 */

void look_pos(char *str, int *pos)
{
	int flag = 1;
	int i = 0, j = 0;

	while (str[i] != '\0')
	{
		if (str[i] != ' '  && str[i + 1] == 0 && flag)
		{
			pos[j] = i;
			pos[j + 1] = i;
		}
		if (str[i] != ' ' && str[i] != 0 && flag)
		{
			flag = 0;
			pos[j] = i;
			j++;
		}
		if (str[i + 1] == 0 && flag == 0)
			pos[j] = i;
		if (str[i + 1] == ' ' && str[i] != ' ')
		{
			pos[j] = i;
			j++;
		}
		if (str[i] == ' ')
			flag = 1;
		i++;
	}
}
/**
 * strtow - function that returns a pointer to an array of strings (words)
 * Return: pointer to the array
 * @str: pointer to the array
 */
char **strtow(char *str)
{
	int words = 0;
	int b = 0;
	int b1 = 0;
	int l = 0;
	char **m = NULL;
	int *pos = NULL;

	words = count_words(str);
	m = (char **) malloc((sizeof(char *) * words) + 1);
	if (m == NULL || words == 0)
	{
		free_grid(m, words);
		return (NULL);
	}
	pos = (int *)malloc(sizeof(int) * words * 2);
	look_pos(str, pos);
	for (b = 0; b < words; b++)
	{
		int p1 = pos[b1];
		int p2 = pos[b1 + 1];
		int sz = p2 - p1 + 2;
		*(m + b) = (char *)malloc(sizeof(char) * (sz));
		if (m == NULL)
		{
			free(m);
			return (NULL);
		}

		for (l = 0; l < sz - 1; l++, p1++)
			*(*(m + b) + l) = *(str + p1);
		*(*(m + b) + l) = '\0';
		b1 = b1 + 2;
	}
	m[b + 1] = NULL;
	return (m);
}
