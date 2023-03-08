#include "main.h"
#include <stdio.h>
/**
 * _puts_recursion - fucntion to hold printing string
 * @s: string to be printed
 * Return: string.
 */

void _puts_recursion(char *s)
{
if (*s == '\0')
{
	putchar('\n');
return;
}
putchar(*s);
s++;
_puts_recursion(s);
}
