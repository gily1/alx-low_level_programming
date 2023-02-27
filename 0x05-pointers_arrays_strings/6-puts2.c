#include<stdio.h>
#include "main.h"
/**
 * puts2 - printing every other charchter of a string
 * @str: the string to be treated
 * Return: void
 */
void puts2(char *str)
{
int i;
int j = 0;
while (str[j] != '\0')
{
j++;
}
for (i = 0; i < j; i += 2)
{
putchar(str[i]);
}
putchar('\n');
}
