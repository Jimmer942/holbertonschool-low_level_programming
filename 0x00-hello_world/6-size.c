#include <stdio.h>
/**
 * main - give the size variables
 * Return: 0 if compilation is succesfully, we write on the standart error
  */
int main(void)
{
	char v_c;
	int v_i;
	float v_f;
	long int v_l;
	long long int v_ll;

	printf("Size of a char: %d byte(s)\n", sizeof(v_c));
	printf("Size of an int: %d byte(s)\n", sizeof(v_i));
	printf("Size of a float: %d byte(s)\n", sizeof(v_f));
	printf("Size of a long int: %d byte(s)\n", sizeof(v_l));
	printf("Size of a long long int: %d byte(s)\n", sizeof(v_ll));
	return (0);
}
