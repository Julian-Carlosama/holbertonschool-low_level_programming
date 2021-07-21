#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - creates a new dog.
 *
 * @name: dog name
 *
 * @age: dog age
 *
 * @owner: dog owner
 *
 * Return: te new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *ptrDog;
	int i, na, ow;

	ptrDog = malloc(sizeof(*ptrDog));
	if (ptrDog == NULL || !name || !owner)
	{
		free(ptrDog);
		return (NULL);
	}
	for (na = 0; name[na] != '\0'; na++)
		;

	for (ow = 0; owner[ow] != '\0'; ow++)
		;

	ptrDog->name = malloc(na + 1);
	ptrDog->owner = malloc(ow + 1);

	if (!(ptrDog->name) || !(ptrDog->owner))
	{
		free(ptrDog->name);
		free(ptrDog->owner);
		free(ptrDog);
		return (NULL);
	}

	for (i = 0; i < na; i++)
		ptrDog->name[i] = name[i];
	ptrDog->name[i] = '\0';

	ptrDog->age = age;

	for (i = 0; i < ow; i++)
		ptrDog->owner[i] = owner[i];
	ptrDog->owner[i] = '\0';

	return (ptrDog);
}
