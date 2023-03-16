#include <stdio.h>
#include <stdlib.h>
/**
 * malloc_checked - function
 * @b: integer
 * Return: results
 */
void *malloc_checked(unsigned int b)
{
  void *ptr = malloc(b);
  
  if (ptr == NULL)
  {
    printf("Error: malloc failed to allocate memory.\n");
    exit(98);
  }

  return(ptr);
}

