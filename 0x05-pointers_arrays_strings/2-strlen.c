#include<stdio.h>
/**
 *  _strlen - holding statents of fucntion
 *  @s:  storing vallue
 *  Return:something
 */
int _strlen(char *s)
{
char length = 0;
while (*s++)
length++;
return (length);
}
