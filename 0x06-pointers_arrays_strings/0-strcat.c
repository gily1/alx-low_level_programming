#include"main.h"
#include<stdio.h>
/**
 * _strcat - function to hold strings to be conancatenated
 * @src: the second string
 *@dest: first string
 * Return: string.
 */
char *_strcat(char *dest, char *src)
{
int i = 0;
int j;
while (dest[i] != '\0')
{
i++;
}
for (j = 0; src[j] != 0; j++)
{
dest[i] = src[j];
i++;
}
dest[i] = '\0';
return (dest);
}
