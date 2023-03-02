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
while (dest[i] != '\0')
{
s1[j] = dest[i];
i++;
j++;
}
i = 0;
while (src[i] != '\0')
{
s1[j] = src[i];
i++;
j++;
}
s1[j] = '\0';
return (dest);
}
