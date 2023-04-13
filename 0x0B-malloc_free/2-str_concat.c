#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 * str_concat - a function that concatenates two strings
 * @s1: the first string
 * @s2: the second string
 * Return: a pointer to the concatinated string
 * or NULL if fail
 */
char *str_concat(char *s1, char *s2)
{
	int len1 = 0;
	int len2 = 0;
	char *snew;
	int i = 0;
	int sum;
	int n = 0;

	while (s1[len1] != '\0')
	{
		len1++;
	}
	while (s2[len2] != '\0')
	{
		len2++;
	}
	sum = len1 + len2;
	snew = malloc((sum + 1) * sizeof(char));
	if (snew == NULL)
	{
		return (NULL);
	}
	while (i < len1)
	{
		snew[i] = s1[i];
		i++;
	}
	while (i < len2)
	{
		snew[i] = s2[n];
		i++;
		n++;
	}
	snew[i] = '\0';
	return (snew);
}
