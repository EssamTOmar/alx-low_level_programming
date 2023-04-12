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
	int sum = 0;

	if (argc < 2)
	{
		printf("0\n");
	}
	if (_atoi(argv[i]) > 47 && _atoi(argv[i]) < 58)
	{
		while (i > 0)
		{
			sum += _atoi(argv[i]);
			i++;
		}
		return (0);
	}
	else
		printf("Error\n");
	return (1);
}
