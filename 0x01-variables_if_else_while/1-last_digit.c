#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point. the last digit nof a randomly generated number
 *weather it is greater than 5, less than 6 or equal to 0
 * Return: Always 0 (Success)
 */

/* betty style doc for function main goes there */
int main(void)
{
	int n;
	int b = n % 10;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (b > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, b);
	else if (b == 0)
		printf("Last digit of %d is %d and is 0\n", n, b);
	else(b < 6)
		&& (b != 0)
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, b);
	return (0);
}