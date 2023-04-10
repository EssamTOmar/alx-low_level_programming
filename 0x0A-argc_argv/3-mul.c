#include "main.h"
#include <stdio.h>
/**
 * main - Entry Point
 * @argc: the count of arguments
 * @argv: array og pointers
 * Return: always 0 if (success)
 */
int main(int argc, char *argv[])
{
	int i;
	int mul;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	for (i = 1; i < argc; i++)
	{
		printf("%d\n", mul);
		mul = _atoi(argv[1]) * _atoi(argv[3]);
	}

	return (0);
}
