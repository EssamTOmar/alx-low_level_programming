#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strdup - a function that returns a pointer to a newly
 * allocated space in memory
 * @str: as tring given as a parameter
 * Return: a pointer to the duplicated string or NULL if
 * insufficient memory was available
 */
char *_strdup(char *str)
{
	int i = 0;
	int len = 0;
	char *s;

	while (str[len] != '\0')
	{
		len++;
	}
	s = malloc(len * sizeof(char));
	if (s == 0)
	{
		return (NULL);
	}
	while (i < len)
	{
		s[i] = str[i];
		i++;
	}
	s[i] = '\0';
	return (s);
}
