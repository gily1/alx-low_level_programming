#include "main.h"
#include <stdio.h>
/**
 * _print_rev_recursion - fucntion to hold printing string in reverse
 * @s: string to be printed
 * Return: string.
 */

void _print_rev_recursion(char *s)
{
if (*s == '\0')
{
	putchar('\n');
return;
}
s++;
_print_rev_recursion(s);
s--;
putchar(*s);
}
