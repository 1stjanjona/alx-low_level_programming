#include <stdio.h>

/**
 * add - addition
 * @a: 1st num
 * @b: 2nd num
 * Return: addition of a & b
*/
int add(int a, int b)
{
	return (a + b);
}
/**
 * sub - substracte
 * @a: 1st num
 * @b: 2nd num
 * Return: substracte
*/
int sub(int a, int b)
{
	return (a - b);
}
/**
 * mul - multiplication
 * @a: 1st num
 * @b: 2nd num
 * Return: multiplication
*/
int mul(int a, int b)
{
	return (a * b);
}
/**
 * div - division
 * @a: 1st num
 * @b: 2nd num
 * Return: division
*/
int div(int a, int b)
{
	while (b != 0)
	{
		return (a / b);
	}
}
/**
 * mod - modulu
 * @a: 1st num
 * @b: 2nd num
 * Return: modulu
*/
int mod(int a, int b)
{
	while (b != 0)
	{
		return (a % b);
	}
}
