#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: always 0 (success)
 */
int main(void)
{
	int num;

	if ((num % 3 == 0) && (num & 5 == 0))
	{
		printf("%s\n", "FizzBuzz");
	}
	else if (num % 5 == 0)
	{
		printf("%s\n", "Buzz");
	}
	else if (num % 3 == 0)
	{
		printf("%s\n", "Fizz");
	}
	else
		printf("%d\n", num);
	return (0);
}
