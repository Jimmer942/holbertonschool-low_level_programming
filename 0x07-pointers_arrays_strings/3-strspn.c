#include "holberton.h"
/**
 * _strspn - is a function that gets the length of a prefix substring.
 * @s: String to look.
 * @accept: substring.
 * Return: dest.
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0, flag = 0;
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				count++;
				flag = 1;
			}
		}
		if (flag != 1)
		{
			break;
		}
		flag = 0;
	}
	return (count);
}
