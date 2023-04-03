#include "main.h"
/**
 * _strpbrk - a function that searches a string for any of a set of bytes.
 * @s: the first string
 * @accept: the second string
 *
 * Return:  a pointer to the byte in s that matches one of the bytes in
 * accept, or NULL if no such byte is found
 */
char *_strpbrk(char *s, char *accept)
{
	int i;
	int m;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (m = 0; accept[m] != '\0'; m++)
		{
			if (s[i] == accept[m])
			{
				return (s);
			}
		}
	}
	return (0);
}
