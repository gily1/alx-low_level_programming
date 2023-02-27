#include<stdio.h>
#include "main.h"
/**
 * print_rev - printng reves of a string
 * @s: the string to print
 * Return: void
 */
void print_rev(char *s)
{
int c = 0;
while (s[c] != '\0')
{
c++;
}
for (c -= 1; c >= 0; c--)
{
putchar(s[c];
}
putchar('\n');
}
