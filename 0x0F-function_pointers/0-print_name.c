/**
 * print_name - is a function that prints a name.
 * @name: name to print.
 * @f: Function that calls a *char.
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
