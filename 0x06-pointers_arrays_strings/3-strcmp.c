#include "main.h"
/**
 * _strcmp - compire two strings
 * @s1: frst string
 * @s2: scnd string
 * Return: comment
 */
int _strcmp(char *s1, char *s2)
{
while (*s1 && *s2 && *s1 == *s2)
{
s1++;
s2++;
}
return (*s1 - *s2);
}
