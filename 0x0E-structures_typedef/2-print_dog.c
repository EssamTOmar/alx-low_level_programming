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
		printf("Name: %s\nAge: %f\nOwner: %s\n", "(nil)", d->age, d->owner);
	}
	if (d->age < 0)
	{
		printf("Name: %s\nAge: %s\nOwner: %s\n", d->name, "(nil)", d->owner);
	}
	if (d->owner == NULL)
	{
		printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, "(nil)");
	}
	if (d == NULL)
	{
		return;
	}
}
