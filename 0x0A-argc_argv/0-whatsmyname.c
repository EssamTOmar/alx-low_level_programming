#include "main.h"
#include <stdio.h>
/**
 * main - Entry Point
 * @argc: the count of argumments
 * @argv: the array of pointers
 * Return: always 0if (success)
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv[]);
	return (0);
}
