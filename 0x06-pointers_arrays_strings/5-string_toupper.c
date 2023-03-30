#include "main.h"
/**
 * string_toupper - changes all lowercase letters of a string to uppercase
 * @str: the char to be converted
 *
 * Return: the string's characters all in uppercase
 */
char *string_toupper(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 32;
		}
	}
	return (str);
}
