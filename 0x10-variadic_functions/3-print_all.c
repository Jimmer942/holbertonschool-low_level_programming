#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * p_char - prints a char.
 * @val: char to print.
 */
void p_char(va_list val)
{
	printf("%c", va_arg(val, int));
}
/**
 * p_int - prints an integer.
 * @val: integer to print.
 */
void p_int(va_list val)
{
	printf("%i", va_arg(val, int));
}
/**
 * p_float - prints a float.
 * @val: float to print.
 */
void p_float(va_list val)
{
	printf("%f", va_arg(val, double));
}
/**
 * p_string - prints an integer.
 * @val: string to print.
 */
void p_string(va_list val)
{
	char *s;

	s = va_arg(val, char *);
	if (s == NULL)
		s = "(nil)";
	printf("%s",  s);
}
/**
 * print_all - is a function that selects the correct function to print.
 * @format: identifier to look for.
 */
void print_all(const char * const format, ...)
{
	ident to_print[] = {
		{"c", p_char},
		{"i", p_int},
		{"f", p_float},
		{"s", p_string},
		{NULL, NULL}
	};
	va_list args;
	int i, j;
	char *c = "";

	va_start(args, format);
	i = 0;

	while (format[i] != '\0' && format != NULL)
	{
		j = 0;
		while (j < 4)
		{
			if (*to_print[j].id == format[i])
			{
				printf("%s", c);
				to_print[j].f(args);
				c = ", ";
				break;
			}
			j++;
		}
		i++;
	}
	printf("\n");
	va_end(args);
}
