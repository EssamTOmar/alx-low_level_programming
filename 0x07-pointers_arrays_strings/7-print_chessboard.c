#include "main.h"
/**
 * print_chessboard - a function that prints the chessboard
 * @a: two diminsional array
 */
void print_chessboard(char (*a)[8])
{
	int i;
	int m;

	for (i = 0; i < 8; i++)
	{
		for (m = 0; m < 8; m++)
		{
			_putchar(a[i][m]);
		}
		_putchar('\n');
	}
}
