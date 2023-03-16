#include<stdio.h>
#include<stdlib.h>
#include "main.h"
/**
 * _realloc - reallocates a memory block using malloc and free
 * @ptr: pointer to the memory previously allocated with malloc(old_size)
 * @old_size: size, in bytes, of the allocated space for ptr
 * @new_size: new size, in bytes, of the new memory block
 *
 * Return: pointer to the reallocated memory block
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}

	if (ptr == NULL)
	{
		return (malloc(new_size));
	}

	if (new_size == old_size)
	{
		return (ptr);
	}

	void *new_ptr = malloc(new_size);
	unsigned int copy_size = old_size < new_size ? old_size : new_size;
	char *src = (char *)ptr;
	char *dest = (char *)new_ptr;

	for (unsigned int i = 0; i < copy_size; i++)
	{
		dest[i] = src[i];
	}

	free(ptr);
	return (new_ptr);
}

