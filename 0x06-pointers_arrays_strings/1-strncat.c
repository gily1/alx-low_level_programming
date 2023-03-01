#include"main.h"
#include<stdio.h>
/**
 * _strncat - fucntion for concatanating strings
 * @dest: first string
 * @src: second string
 * @n:number of bytes to be appended to dest
 * Return: string.
 */
char *_strncat(char *dest, char *src, int n)
{
int i = 0;
int j = 0;
while (dest[i++])
j++;
for (i = 0; src[i] && i <  n; i++)
{
dest[j++] = src[i];
}
return (dest);
}
