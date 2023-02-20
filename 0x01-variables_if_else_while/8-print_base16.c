#include<stdio.h>
#include<stdlib.h>
/**
 * main - program for hexadecimal numbers
 * Return: 0 alws
 */
int main(void)
{
int a;
char b;
while (a < 10)
{
putchar(a + '0');
a++;
}
while (b <= 'f')
{
putchar(b);
b++;
}
putchar('\n');
return (0);
}
