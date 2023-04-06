#include<stdio.h>
#include"main.h"
/**
 * get_endianness - Checks the endianness of the system.
 *
 * Return: 0 if big endian, 1 if little endian.
 */
int get_endianness(void)
{
unsigned int a = 1;
char *e = (char *)&a;
if (*e)
return (1);
else
return (0);
}

