#include<stdio.h>
/**
 * _puts - printing string
 * @str: to hold value to be preinted
 * Return: something
 */
void _puts(char *str)
{
for (; *str != '\0'; str++)
{
putchar(*str);
}
putchar('\n');
}
