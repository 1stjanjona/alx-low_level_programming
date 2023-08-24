#include "main.h"

/**
 * reverse_array - che ck ht integers pf an array
 *
 * @a: 'array to be reversed'
 * @n: 'number of elements'
 *
 * Return: No return
*/
void reverse_array(int *a, int n)
{
	int *i = a;
	int *s = a + n - 1;
	int rev;

	while (i < s)
	{
		rev = *i;
		*i = *s;
		*s = rev;
		i++;
		s--;
	}
}
