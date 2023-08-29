#include <stdio.h>

/**
 * print_chessboard - Print a chessboard.
 * @a: A 2D array representing the chessboard.
 * This function takes a 2D array representing a chessboard and prints its
 * contents, row by row.
 */
void print_chessboard(char (*a)[8])
{
	for (int i = 0; i < 8; i++)
	{
		for (int j = 0; j < 8; j++)
		{
			printf("%c", a[i][j]);
		}
		printf("\n");
	}
}
