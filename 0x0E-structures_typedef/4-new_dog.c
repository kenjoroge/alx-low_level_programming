#include <stdio.h>
#include "dog.h"
#include <stdlib.h>
/**
 * *new_dog - creates a new dog
 * @name: takes a char
 * @age: takes a real number
 * @owner: also takes a cahracter
 *
 * Return: Pointer
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	int i;
	int j = 0, k = 0;
	dog_t *p;

	p = malloc(sizeof(dog_t));
	if (p == NULL)
		return (NULL);
	for (i = 0; name[i] != '\0'; i++)
		;
	p->name = malloc(sizeof(char) * (i + 1));

	if (p->name == NULL)
	{
		free(p);
		return (NULL);
	}

	for (k = 0; k <= i; k++)
		p->name[k] = name[k];


	p->age = age;

	for (j = 0; owner[j] != '\0'; j++)
		;

	p->owner = malloc(sizeof(char) * (j + 1));

	if (p->owner == NULL)
	{
		free(p);
		free(p->name);
		return (NULL);
	}

	for (k = 0; k <= j; k++)
		p->owner[k] = owner[k];

	return (p);
}

