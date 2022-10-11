#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * new_dog - new dog
 * @name: dog's name
 * @age: dogs'age
 * @owner: dog's owner
 * Return: newdog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	int i = 0, j = 0, k;
	dog_t *di;

	while (name[i] != '\0')
		i++;
	while (owner[j] != '\0')
		j++;

	di = malloc(sizeof(dog_t));
	if (di == NULL)
	{
		free(di);
		return (NULL);
	}
	di->name = malloc(i * sizeof(di->name));
	if (di->name == NULL)
	{
		free(di->name);
		free(di);
		return (NULL);
	}
	for (k = 0; k <= i; k++)
		di->name[k] = name[k];
	di->age = age;
	di->owner = malloc(j * sizeof(di->owner));
	if (di->owner == NULL)
	{
		free(di->owner);
		free(di->name);
		free(di);
		return (NULL);
	}
	for (k = 0; k <= j; k++)
		di->owner[k] = owner[k];
	return (di);
}
