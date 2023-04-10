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

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}
	mul = _atoi(argv[1]) * _atoi(argv[2]);
	printf("%d\n", mul);

	return (0);
}
