#include "dog.h"
#include <stdio.h>

/**
 * print_dog _ prints struct dog
 * @d: dog id
 */

void print_dog(struct dog *d)
{
	if (d)
	{
		if (d->name == NULL)
			printf("Name: (nil)\n");
		else
			printf("Name: %s\n", d->name);
		if (d->age < 0)
			printf("nil\n");
		else
			printf("Age: %f\n", d->age);

		if (d->owner == NULL)
			printf("nil\n");
		else
			printf("Owner: %s\n", d->owner);
	}
}
