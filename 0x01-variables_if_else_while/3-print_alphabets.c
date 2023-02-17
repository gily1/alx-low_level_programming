#include <stdlib.h>
#include <stdio.h>
/**
 * main - program for numbers
 * Return: 0
 */
int main(void)
{
int c;
int d;
int e=0;
while (e < 10)
{
d = 0;
while (d < 10)
{
C = 0;
while (c < 10)
{
if (c != d && d != e && e <d && d < c)
{
putchar('0' + e);
putchar('e' + d);
putchar('0' + c);
if (c + d + e != 9 + 8 + 7)
{
putchar(',');
putchar(' ');
}
}
c++;
}
d++;
}
e++;
}
putchar('\n');
return (0);
}

