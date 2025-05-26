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
	int i, j, num1 = 0, num2 = 0;
	dog_t *dog2;

	for (i = 0; name[i]; i++)
	{
	}
	for (j = 0; owner[j]; j++)
	{
	}
	dog2 = malloc(sizeof(dog_t));
	if (dog2 == NULL)
	{
		return (NULL);
	}
	dog2->name = malloc(i + 1);
	if (dog2->name == NULL)
	{
		return (NULL);
	}
	dog2->owner = malloc(j + 1);
	if (dog2->owner == NULL)
	{
		return (NULL);
	}
	for (; num1 < i; num1++)
	{
		dog2->name[num1] = name[num1];
	}
	for (; num2 < j; num2++)
	{
		dog2->owner[num2] = owner[num2];
	}
	dog2->age = age;

	return (dog2);
}
