#include "3-calc.h"
#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - perform simple operations
 * @argc: 'argument count'
 * @argv: 'argument vector'
 * Return: Always 0.
*/
int main(int argc, char *argv[])
{
	int num1 = atoi(argv[1]);
	char opr = argv[2][0];
	int num2 = atoi(argv[3]);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (opr != '+' && opr != '-' && opr != '*' && opr != '/' && opr != '%')
	{
		printf("Error\n");
		exit(99);
	}
	if ((opr == '/' && num2 == 0) || (opr == '%' && num2 == 0))
	{
		printf("Error\n");
		exit(100);
	}
	printf("%d\n", get_op_func((int *)opr)(num1, num2));
	return (0);
}
