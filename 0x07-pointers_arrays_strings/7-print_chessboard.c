#include "main.h"
/**
 * print_chessboard - prints the chess board
 * @a: array size
 * Return: chessboard outside arr
 */

void print_chessboard(char (*a)[8])
{
	int b, c;

	for (b = 0; b < 8; b++)
	{
		for (c = 0; c < 8; c++)
		{
			putchar(a[b][c]);
		}
		putchar('\n');
	}
}
