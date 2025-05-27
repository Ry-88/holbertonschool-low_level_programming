#include "dog.h"
#include <stdlib.h>

int _strlen(char *s);
char *_strcpy(char *dest, char *src);

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
	int l_name = 0, l_owner = 0;

	if (name == NULL || owner == NULL)
	{
		return (NULL);
	}
	l_name = _strlen(name);
	l_owner = _strlen(owner);
	dog2 = malloc(sizeof(dog_t));
	if (dog2 == NULL)
	{
		return (NULL);
	}
	dog2->name = malloc(l_name * sizeof(char) + 1);
	if (dog2->name == NULL)
	{
		free(dog2->name);
		free(dog2);
		return (NULL);
	}
	dog2->owner = malloc(l_owner * sizeof(char) + 1);
	if (dog2->owner == NULL)
	{
		free(dog2->owner);
		free(dog2);
		return (NULL);
	}
	dog2->name = _strcpy(dog2->name, name);
	dog2->owner = _strcpy(dog2->owner, owner);
	dog2->age = age;

	return (dog2);
}

/**
 * _strlen - count the number of latter
 *
 * @s: contain a word
 *
 * Return: n
 */

int _strlen(char *s)
{
	int n = 0;

	while (s[n] != '\0')
	{
		n++;
	}

	return (n);
}

/**
 * _strcpy - copies the string pointed to by src
 *
 * @dest: contain array s1
 * @src: contain a text
 *
 * Return: dest
 */

char *_strcpy(char *dest, char *src)
{
	int n = 0, s = 0;

	while (src[n] != '\0')
	{
		n++;
	}

	while (s <= n)
	{
		if (s == n)
		{
			dest[s] = '\0';
			break;
		}
		dest[s] = src[s];
		s++;
	}

	return (dest);
}
