#include <stdio.h>
#include <stdarg.h>
/**
 * print_numbers - is a function that prints numbers, followed by a new line.
 * @separator: String between numbers.
 * @n: Number of parameters.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	int val;
	va_list args;

	if (separator == NULL)
		separator = "";
	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		val = va_arg(args, int);
		if (i == n - 1)
			printf("%i\n", val);
		else
			printf("%i%s", val, separator);
	}
}
