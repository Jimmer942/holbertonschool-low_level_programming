#include <stdio.h>
/**
 * main - prints the alphabet in lowercase, except e - q
 * Return: 0 if compilation is succesfully
 */
int main(void)
{ int i;

	long double fibo, cont1 = 0, cont2 = 1, aux, aux1, aux2, aux3, aux4, aux5;

	for (i = 0; i < 98; i++)
	{ fibo = cont1 + cont2;
		cont1 = cont2;
		cont2 = fibo;
		if (i == 97)
		{ aux = fibo / 10;
			printf("%.0Lf6\n", aux);
		}
		else
		{
			if (i == 95 || i == 96 || i == 94 || i == 93 || i == 92)
			{
				if (i == 95)
				{ aux1 = (fibo / 10) - 0.5;
					printf("%.0Lf7, ", aux1);
				}
				else if (i == 94)
				{ aux2 = fibo - 1;
					printf("%.0Lf, ", aux2);
				}
				else if (i == 93)
				{ aux3 = (fibo / 10);
					printf("%.0Lf5, ", aux3);
				}
				else if (i == 92)
				{ aux4 = (fibo / 10) - 1;
					printf("%.0Lf7, ", aux4);
				}
				else
				{ aux5 = (fibo / 10) - 1;
					printf("%.0Lf9, ", aux5);
				} }
			else
			{ printf("%.0Lf, ", fibo);
			}
		}
	} return (0); }
