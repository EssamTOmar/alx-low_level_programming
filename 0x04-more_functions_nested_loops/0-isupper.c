#include "main.h"
#include <stdio.h>

/**
 * _isupper - checks the letter
 * @c: letter input.
 * Return: Always 0.
 */
int _isupper(int c)
{
	char c;

	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
