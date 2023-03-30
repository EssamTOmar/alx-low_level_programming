#include "main.h"
/**
 * _strcmp - a function that compares two strings
 * @s1: This is the first string to be compared
 * @s2: This is the second string to be compared
 *
 * Return: 0 if s1 = s2, 1 if s2 > s1, -1 if s1 > s1
 */
int _strcmp(char *s1, char *s2)
{
	int len1 = 0;
	int len2 = 0;
	int result;

	while (s1[len1] != '\0')
	{
		len1++;
	}
	while (s2[len2] != '\0')
	{
		len2++;
	}
	if (len1 == len2)
	{
		result = 0;
	}
	else if (len1 > len2)
	{
		result = -1;
	}
	else
	{
		result = 1;
	}
	return (result);
}

