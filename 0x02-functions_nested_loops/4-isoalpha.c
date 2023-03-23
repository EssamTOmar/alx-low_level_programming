#include "main.h"
/**
 * _isalpha - checks the letter is uppercase or lowercase
 *
 * @c: checks the input of the function
 *
 * Return: return 1 if lower or upper case return 0 if otherwise
 */
int _isalpha(int c)
{
	if (c >= 97 && c <= 122 && c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
