#include "main.h"
/**
 * _strstr - a function that locates a substring
 * @haystack: This is the main C string to be scanned
 * @needle: This is the small string to be searched
 * with-in haystack string
 * Return: a pointer to the beginning of the located substring
 * or NULL if the substring is not found
 */
char *_strstr(char *haystack, char *needle)
{
	int i;
	int m;
	int n = 0;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (m = 0; needle[m] != '\0'; m++)
		{
			if (needle[m] != haystack[i + m])
			{
				break;
			}
			if (needle[m] == '\0')
				return (haystack + i);
		}
	}
	return ('\0');
}
