#include "main.h"
#include <stdio.h>
/**
 * _isalpha - check if c is lower or uppercase
 * @c: letter
 * Return: 1 if c is lower 0 if not
*/
int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
