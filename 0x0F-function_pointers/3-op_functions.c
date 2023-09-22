#include "3-calc.h"

int op_add(int a, int b);
/**
 * op_add - return the sum of a & b
 * @a: 'number a'
 * @b: 'number b'
 * Return: Return (a + b)
*/
int op_add(int a, int b)
{
	return (a + b);
}

int op_sub(int  a, int b);
/**
 * op_sub - return the substraction of a & b
 * @a: 'number a'
 * @b: 'number b'
 * Return: Return (a - b)
*/
int op_sub(int a, int b)
{
	return (a - b);
}

int op_mul(int a, int b);
/**
 * op_mul - return the product of a & b
 * @a: 'number a'
 * @b: 'number b'
 * Return: Return (a * b)
*/
int op_mul(int a, int b)
{
	return (a * b);
}

int op_div(int a, int b);
/**
 * op_div - return the division of a by b
 * @a: 'number a'
 * @b: 'number b'
 * Return: Return (a / b)
*/

int op_mod(int a, int b);
/**
 * op_mod - return the remainder of a by b
 * @a: 'number a'
 * @b: 'number b'
 * Return: Return (a % b)
*/
int op_mod(int a, int b)
{
	return (a % b);
}
