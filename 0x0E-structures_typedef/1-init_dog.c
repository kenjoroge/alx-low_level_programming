#include <stdio.h>
#include "dog.h"
/**
 * init_dog - takes the struct dog and initializes it
 * @d: pointer to dog struct
 * @name: takes a character for an input
 * @age: takes a real number for an input
 * @owner: also takes a charcter
 *
 * Return: a pointer
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;
	d->name = name;
	d->age = age;
	d->owner = owner;
}
