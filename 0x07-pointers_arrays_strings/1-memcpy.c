#include "main.h"
/**
 * _memcpy - head fucnton
* @dest: storage of memory
 *@src: memory copy location
* @n: number of bytes
 *Return: something
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{

int r;
int i = n;
for (r = 0; r < i; r++)
{
dest[r] = src[r];
n--;
}
return (dest);
}
