#ifndef HEADER_FILE
#define HEADER_FILE
/**
 * struct dog - contain a name, owner and age of dog.
 * @name: name of the dog
 * @owner: name of the owner
 * @age: age of the dog
 */

struct dog
{
	char *name;
	char *owner;
	float age;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
