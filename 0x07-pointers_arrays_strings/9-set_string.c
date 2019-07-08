#include "holberton.h"
#include <stdio.h>
/**
 * set_string - is a function that sets the value of a pointer to a char.
 * @s: Pointer to a pointer.
 * @to: Pointer to a char.
 */

void set_string(char **s, char *to)
{
	*s = to;
}
