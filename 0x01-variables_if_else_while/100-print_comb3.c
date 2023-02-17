#include <stdlib.h>
#include <stdio.h>
/**
 * main - program that print everthing
 * description: write program that print all possible
 * diffent combination of two nbrs
 * 01 and 10 are considered as same combination of two digits o and 1
 * Return: (0) (success)
 */
int main(void)
{
int c;
int d = 0;
while (d < 10)
{
c = 0;
while (c < 10)
{
if (d != c && d < c)
{
putchar('0' + d);
putchar('0' + c);
if (c + d != 17)
{
putchar(',');
putchar(' ');
}
}
c++;
}
d++;
}
putchar('\n');
return (0);


}
