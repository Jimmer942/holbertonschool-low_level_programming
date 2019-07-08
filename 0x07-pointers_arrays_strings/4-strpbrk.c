#include "holberton.h"
/**
 * _strpbrk - is a function that searches a string for any of a set of bytes.
 * @s: String to look.
 * @accept: substring.
 * Return: dest.
 */

char *_strpbrk(char *s, char *accept)
{
	unsigned int flag = 0;
	int i, j;
	char *p = (void *)0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (accept[j] == s[i])
			{
				flag = 1;
			}
		}
		if (flag == 1)
		{
			return (s + i);
		}
		flag = 0;
	}
	return (p);
}
