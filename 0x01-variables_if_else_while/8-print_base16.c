#include<stdio.h>
#include<stdlib.h>
/**
 * main - program for hexadecimal numbers
 * Return: 0 alws
 */
int main(void)
{
int a;
char c;
while (a < 10)
{
putchar(a + '0');
a++;
}
while (c <= 'f')
{
putchar(c);
c++;
}
putchar('\n');
return (0);
}
