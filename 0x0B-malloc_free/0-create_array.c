#include <stdio.h>
#include<stdlib.h>
/**
 * create_array - creating array with some conditions
 * @size: size of array
 * @c: character to print
 * Return:NULL if the size is zero or null and r for a valid array
 */
char *create_array(unsigned int size, char c)
{
unsigned int i;
char *r;
if (size == 0)
{
return (NULL);
}
r = malloc(size * sizeof(char));
if (r == NULL)
{
return (NULL);
}
for (i = 0; i < size; i++)
{
r[i] = c;
}
return (r);
}
