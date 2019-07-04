#include "holberton.h"
/**
 * rot13 - a function that encodes a string into rot13.
 * @s: String to code.
 * Return: s on rot13.
 */
char *rot13(char *s)
{
	char *input = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char *rot13 = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	int i, j;

	for (i = 0 ; s[i] != '\0'; i++)
	{
		for (j = 0; input[j] != '\0'; j++)
		{
			if (s[i] == input[j])
			{
				s[i] = rot13[j];
				break;
			}
		}
	}
	return (s);
}
