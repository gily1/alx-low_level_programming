#include "main.h"
/**
 * _memset - function with specific value
* @s:strating address of memory
*@b: desired value
*@n: number of bytes to be changeed
*Return: somwthing
*/
char *_memset(char *s, char b, unsigned int n)
{
int i = 0;
for (; n > 0; i++)
{
s[i] = b;
n--;
}
return (s);
}
