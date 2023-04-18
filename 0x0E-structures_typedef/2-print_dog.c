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
	else
		 printf("Name: %s\n",d->name);
	if (d->age < 0)
	{
		printf("Age: %s\n", "(nil)");
	}
	else
		printf("Age: %f\n", d->age);
	if (d->owner == NULL)
	{
		printf("Owner: %s\n", "(nil)");
	}
	else
		printf("Owner: %s\n", d->owner);
	if (d == NULL)
	{
		return;
	}
}
