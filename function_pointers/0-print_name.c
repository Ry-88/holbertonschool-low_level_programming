#include "function_pointers.h"
/**
 * print_name - print the name of person
 * @name: contain a name
 * @f: pointer to get a function to call
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
