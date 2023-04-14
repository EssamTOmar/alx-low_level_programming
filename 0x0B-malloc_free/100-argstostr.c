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
	int i;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	str = malloc(sizeof(char) * ac);
	if (str == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		str[i] = *av[i];
		_putchar(str[i]);
		_putchar('\n');
	}
	return (str);
}
