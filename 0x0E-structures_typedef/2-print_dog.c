#include "dog.h"
#include <stdio.h>
/**
 * print_dog - a function that prints a struct dog
 * @d: a pointer to the dog information
 * Return: always 0 (success)
 */
void print_dog(struct dog *d)
{
	if (d->name == NULL)
	{
		printf("Name: %s\n","(nil)");
	}
	if (d->age < 0)
	{
		printf("Age: %s\n", "(nil)");
	}
	if (d->owner == NULL)
	{
		printf("Owner: %s\n", "(nil)");
	}
	if (d == NULL)
	{
		return;
	}
}
