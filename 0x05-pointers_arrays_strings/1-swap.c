#include "main.h"
/**
 * swap_int - a function that swaps the values of two integers
 * @a: the firrst value
 * @b: the second value
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *b;
	*b = *a;
	*a = c;
}
