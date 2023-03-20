#include <stdlib.h>
#include "dog.h"
/**
 * free_dog - Frees memory allocated for a dog struct.
 * @d: A pointer to a dog struct.
 *
 * Return: void.
 */
void free_dog(dog_t *d)
{
if (d == NULL)
return;
free(d->name);
free(d->owner);
free(d);
}

