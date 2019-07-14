#include "holberton.h"
#include <stdio.h>
/**
 *  _strstr -  is a function that locates a substring.
 * @haystack:  the string to look.
 * @needle: the substring to find
 * Return: the pointer to the area memory.
 */

char *_strstr(char *haystack, char *needle)
{
	int i, j, k;
	char *p = (void *)0;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		if (haystack[i] == needle[0])
		{
			k = i;
			if (needle[1] == '\0')
				return ((haystack + i));
			i++;
			for (j = 1; needle[j] != '\0'; j++, i++)
			{
				if (!(haystack[i] == needle[j]))
				{
					i--;
					break;
				}
				if (needle[j + 1] == '\0')
				{
					return ((haystack + k));
				}
			}
		}
	}
	return (p);
}
