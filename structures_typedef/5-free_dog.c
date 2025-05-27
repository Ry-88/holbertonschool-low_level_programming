#include "dog.h"
#include <stdlib.h>
/**
 * free_dog - frees dogs
 * @d: contain addrecec of dog_t
 * Return: if d is NULL
 */

void free_dog(dog_t *d)
{
	if (d == NULL)
	{
		return;
	}
	free(d->name);
	free(d->owner);
	free(d);
}
