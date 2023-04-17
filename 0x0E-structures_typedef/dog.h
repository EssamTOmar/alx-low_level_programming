#ifndef DOG_H
#define DOG_H
#include <stdio.h>
/**
 * struct dog - typedef for a function to introduce a dog
 * @name: the name of the dog
 * @owner: the name of the owner
 * @age: the age of the dog
 */
struct dog
{
	char *name;
	char *owner;
	float age;
};
#endif
