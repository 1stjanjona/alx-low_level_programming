#include "main.h"

/**
 * print_chessboard - check the board
 *
 * @a: 'print the chess board a[8][8]'
 *
 * Return: No return.
*/
void print_chessboard(char (*a)[8])
{
	int i = 0;
	int j;

	while (i < 8)
	{
		for (j = 0; j < 8;)
		{
			_putchar(a[i][j++]);
		}
		i++;
		_putchar('\n');
	}
}
