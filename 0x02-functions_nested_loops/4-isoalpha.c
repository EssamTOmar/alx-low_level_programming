#include "main.h"
/**
 * _isalpha - Checks if the letter is lowercase or uppercase
 *
 * @c: input letter for the function.
 *
 * Return: 1 is lowercase or uppercase or 0 is otherwise
 */
int _isalpha(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	if (c >= 65 && c <= 90)
		return (1);
	return (0);
}
