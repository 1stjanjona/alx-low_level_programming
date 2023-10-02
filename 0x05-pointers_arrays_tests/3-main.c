#include <stdio.h>

/**
 * main - printing the adress of a pointer
 *
 * Return: Always 0.
*/
int main(void)
{
	int n;
	int *p;

	n = 98;
	p = &n;

	printf("Address of variable 'p': %p\n", &p);
	return (0);
}
