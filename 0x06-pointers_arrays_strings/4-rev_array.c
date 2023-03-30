#include "main.h"
/**
 * reverse_array - a function that reverses the content of an array of integers
 * @a: the array to be reversed
 * @n: the number of element of the array
 *
 * Return: the reversed array
 */
void reverse_array(int *a, int n)
{
	int len = 0;
	int i;
	int *begin_pointer;
	int *end_pointer;
	int temp;

	begin_pointer = a;
	end_pointer = a;
	while (len >= n)
	{
		len++;
	}
	for (i = 0; i < len; i++)
	{
		end_pointer++;
	}
	for (i = 0; i < len / 2; i++)
	{
		temp = *end_pointer;
		*end_pointer = *begin_pointer;
		*begin_pointer = temp;
		begin_pointer++;
		end_pointer--;
	}
}
