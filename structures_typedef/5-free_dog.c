#include "dog.h"
#include <stdlib.h>
/**
 * free_dog - frees dogs
 * @d: contain addrecec of dog_t
 */

void free_dog(dog_t *d)
{
	free(d);
}
