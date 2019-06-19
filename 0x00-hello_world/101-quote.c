#include <unistd.h>
#include <stdio.h>
#include <string.h>
/**
 * main - and that piece of art is useful\" - Dora Korpar, 2015-10-19\n"
 * Return: 1 if compilation is succesfully, we write on the standart error
 */
int main(void)
{
	char *pha = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	int a = strlen(frase);

	write(2, frase, a);
	return (1);
}
