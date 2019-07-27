#include <stdio.h>
#include <stdarg.h>
/**
 * print_strings - is a function that prints strings, followed by a new line.
 * @separator: String between string.
 * @n: Number of parameters.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *val;
	va_list args;

	if (n == 0)
	{
		printf("\n");
		return;
	}
	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		val = va_arg(args, char*);
		if (val == NULL)
			val = "(nil)";
		if (separator == NULL && i < n - 1)
			printf("%s", val);
		else if (i < n - 1)
			printf("%s%s", val, separator);
	}
	printf("%s\n", val);
	va_end(args);
}
