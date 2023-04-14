#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * argstostr - function that concatenates all the arguments of your program
 * @ac: number of arguments
 * @av: the arguments to be concatenated
 * Return: pointer to a new string, or NULL if it fails
 */
char *argstostr(int ac, char **av)
{
	char *str;
	int i, row, col, size;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	col = 0;
	size = 0;
	for (row = 0; row < ac; row++)
	{
		while (av[row][col])
		{
			size++;
			col++;
		}
		size++;
	}
	str = malloc((sizeof(char) * size) + 1);
	if (str == NULL)
	{
		return (NULL);
	}
	for (row = 0; row < ac; row++)
	{
		i = 0;
		col = 0;
		while (av[row][col])
		{
			str[i] = av[row][col];
			i++;
			col++;
		}
		str[i] = '\n';
		col++;
	}
	str[i] = '\0';
	return (str);
}
