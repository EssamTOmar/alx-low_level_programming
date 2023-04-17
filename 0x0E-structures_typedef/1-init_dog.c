#include "dog.h"
#include <stdio.h>
/**
 * init_dog - a function that initialize a variable of type struct dog
 * @d: the variable to be initialized
 * @name: name of the dog
 * @owner: name of the owner
 * @age: age of the dog
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->owner = owner;
		d->age = age;
	}
}
