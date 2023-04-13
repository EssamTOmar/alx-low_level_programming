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
	int len1 = 0;
	int len2 = 0;
	char *snew;

	while (s1[len1] != '\0')
	{
		len1++;
	}
	while (s2[len2] != '\0')
	{
		len2++;
	}
	snew = malloc(len1 + n);
	if (snew == 0)
	{
		return (NULL);
	}
	if (n >= len2)
	{
		snew = malloc(len1 + len2);
	}
	return (snew);
}
