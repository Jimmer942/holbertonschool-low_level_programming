#ifndef HOLBERTON
#define HOLBERTON
/**
 * struct format - Struct format.
 * @id: The identificator.
 * @f: The function associated.
 */
typedef struct format
{
	char *id;
	void (*f)();
} ident;
void print_all(const char * const format, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
int sum_them_all(const unsigned int n, ...);
#endif
