#include <unistd.h>
/**
 * main - and that piece of art is useful\" - Dora Korpar, 2015-10-19\n"
 * Return: 1 if compilation is succesfully, we write on the standart error
 */
int main(void)
{
	char *pha = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	
	write(2, pha, 59);
	return (1);
}
