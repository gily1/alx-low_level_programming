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
int j = 0;
char s1[20];
while (dest[i])
{
i++;
}
for (j = 0; src[j] != 0; j++)
{
dest[i] = src[j];
i++;
}
dest[j] = '\0';
return (dest);
}
