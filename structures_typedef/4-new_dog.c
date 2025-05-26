#include "dog.h"
#include <stdlib.h>
/**
 * new_dog - get a copy of dog_t
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner name of the dog
 * Return: copy from dog_t or NULL
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog2;

	dog2 = malloc(sizeof(dog_t));
	if (dog2 == NULL)
	{
		return (NULL);
	}
	dog2->name = name;
	dog2->age = age;
	dog2->owner = owner;

	return (dog2);
}
