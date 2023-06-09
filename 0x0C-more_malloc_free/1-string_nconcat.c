#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * string_nconcat - a function that concatenates two strings
 * @s1: the first string
 * @s2: the second string
 * @n: the number of characters of s2
 * Return: apointer to the new concatenated string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, m;
	unsigned int len1 = 0;
	unsigned int len2 = 0;
	char *snew;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[len1] != '\0')
	{
		len1++;
	}
	while (s2[len2] != '\0')
	{
		len2++;
	}
	snew = malloc(len1 + n + 1);
	if (snew == NULL)
	{
		return (NULL);
	}
	for (i = 0; s1[i] != '\0'; i++)
	{
		snew[i] = s1[i];
	}
	for (m = 0; m < n; m++)
	{
		snew[i] = s2[m];
		i++;
	}
	snew[i] = '\0';
	return (snew);
}
