#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */
/**
 * main - Entry point
 *
 * Description: 'positive or negative'
 *
 * Return: Always 0 (Success)
*/
/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	/* your code goes there */

	int lst_dgt;

	lst_dgt = n % 10;

	printf("Enter a number: ");
	scanf("%d", &n, &lst_dgt);

if (lst_dgt > 5)
{
	printf("Last digit of %d is %d and is greater than 5\n", n, lst_dgt);
}
else if (lst_dgt == 0)
{
	printf("Last digit of %d is %d and is 0\n", n, lst_dgt);
}
else if (lst_dgt < 6 && lst_dgt != 0)
{
	printf("Last digit of %d is %d and is less than 6 and not 0\n", n, lst_dgt);
}

	return (0);
}
