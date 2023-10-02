#include <stdio.h>

/**
 * main - adresses of variables
 *
 * Return: Always 0.
*/
int main(void)
{
	int n;
	char c;

	printf("Adress of variable 'c': %p\n", &c);
	printf("Adress of variable 'n': %p\n", &n);
	return (0);
}
