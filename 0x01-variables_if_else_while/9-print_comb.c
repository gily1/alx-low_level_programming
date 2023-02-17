#include <stdlib.h>
#include <stdio.h>
/**
 * main - block description
 * printing all numbers of base 10 single
 * strating from 0 followed by new line
 * Return: 0 (success)
 */
int main(void)
{
int c = 0;
while (c < 10)
{
putchar(48 + c);
if (c != 9)
{
putchar(',');
putchar(' ');
}
c++;
}
putchar('\n');
return (0);
}
