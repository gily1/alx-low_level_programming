#include<stdio.h>
/**
 *  _strlen - holding statents of fucntion
 *  @s:  storing vallue
 *  Return:something
 */
size_t _strlen(const char *s)
{
size_t  length = 0;
while (*s++)
length++;
return (length);
}
