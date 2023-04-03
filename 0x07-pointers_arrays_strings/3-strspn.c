#include "main.h"
/**
 * _strspn - a function that gets the length of a prefix substring
 * @s: This is the main C string to be scanned
 * @accept: This is the string containing the list
 * of characters to match in str1
 * Return: the number of bytes in the initial segment of s
 * which consist only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	int i = 0;
	int m;

	while (s[i] != '\0')
		for (m = 0; s[m] != '\0'; m++)
		{
			if (s[i] == s[m])
			{
				continue;
			}
		}
	return (m);
}
