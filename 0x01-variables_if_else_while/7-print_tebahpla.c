#include<stdio.h>
#include<stdlib.h>
/**
 * main - program for revers alphas
 * Return: 0 alwys
 */
int main(void)
{
char a = 'z';
while (a >= 'a')
{
putchar(a);
a--;
}
putchar('\n');
return (0);
}
