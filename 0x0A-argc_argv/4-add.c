#include "main.h"
#include <stdio.h>
/**
 * main - Entry Point
 * @argc: argument count
 * @argv: array of pointers
 * Return: 0 (success) 1 (Error)
 */
int main(int argc, char *argv[])
{
	int i;
	char *c;
	int sum = 0;

	if (argc < 2)
	{
		printf("0\n");
	}
	c = argv[argc];
	if (*c > 47 && *c < 58)
	{
		for (i = 1; i < argc; i++)
		{
			sum += _atoi(argv[i]);
		}
		printf("%d\n", sum);
		return (0);
	}
	else
		printf("Error\n");
	return (1);
}
