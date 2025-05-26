#include "dog.h"
#include <stdlib.h>
/**
 * init_dog - initialize a variable of type struct
 * @d: contain an addrecec of strcut dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: name of the owner
 * Return: pointer or NULL
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
