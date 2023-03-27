#include "main.h"
/**
 * rev_string - a function that reverses a string
 * @s: the string to be reversed
 * Return: the reversed string
 */
void rev_string(char *s)
{
	int len = 0;
	int i;
	char *begin_pointer;
	char *end_pointer;
	char temp;

	begin_pointer = s;
	end_pointer = s;
	while (s[len] != '\0')
	{
		len++;
	}
	len--;
	for (i = 0; i < len ; i++)
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
