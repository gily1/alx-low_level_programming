#include <stdio.h>
#include <stdlib.h>
	#include "dog.h"
/**
 * init_dog - initializes a struct dog with provided values
 * @d: pointer to struct dog to initialize
 * @name: pointer to string to set dog's name to
 * @age: float to set dog's age to
 * @owner: pointer to string to set dog's owner to
 *
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d != NULL)
{
d->name = name;
d->age = age;
d->owner = owner;
}
}

