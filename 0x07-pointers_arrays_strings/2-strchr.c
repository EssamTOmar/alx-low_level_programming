#include "main.h"
/**
 * _strchr - a function that locates a character in a string
 * @s: This is the C string to be scanned
 * @c: This is the character to be searched in str
 *
 * Return: a pointer to the first occurrence of the character c in the string s
 * or NULL if the character is not found
 */
char *_strchr(char *s, char c)
{
	int i = 0;
	int len = 0;
	int num = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	while (s[len] != '\0')
	{
		if (s[len] == c)
		{
			s[0 + num] = s[len + num];
			num++;
		}
		else
			return ('\0');
		len++;
	}
	return (s);
}
