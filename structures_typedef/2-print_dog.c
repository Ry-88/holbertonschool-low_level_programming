#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_dog - prints a content of struct dog elements
 * @d: contain addrecec of struct dog
 * Return: if d NULL
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		return;
	}
	if (d->name == NULL)
	{
		d->name = "nil";
	}
	if (d->owner == NULL)
	{
		d->owner = "nil";
	}
	if (d->age < 0)
	{
		printf("Name: %s\nAge: nil\nOwner: %s\n", d->name, d->owner);
	}
	else
	{
		printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
	}
}
