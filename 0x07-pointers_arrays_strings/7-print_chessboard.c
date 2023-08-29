#include "main.h"

/**
 * print_chessboard - Print a chessboard.
 * @a: A 2D array representing the chessboard.
 * This function takes a 2D array representing a chessboard and prints its
 * contents, row by row.
 */
void print_chessboard(char (*a)[8])
{
	int i,j;
	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			_putchar(a[i][j]);
		}
		_putchar('\n');
	}
}
