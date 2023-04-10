#include "main.h"
#include <stdio.h>
/**
 * main - Entry Point
 * @argc: the count of arguments
 * @argv: array og pointers
 * Return: 0 (success) 1 (error)
 */
int main(int argc, char *argv[])
{
	int result, num1, num2;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}

	num1 = _atoi(argv[1]);
	num2 = _atoi(argv[2]);
	result = num1 * num2;

	printf("%d\n", result);

	return (0);
}
