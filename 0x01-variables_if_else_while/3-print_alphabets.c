#include<stdlib.h>
#include<stdio.h>
/**
 * main - program for numbers
 * Return: 0
 */
int main(void)
{
char c = 'a';
char d = 'A';
while (c <= 'z')
{
putchar(c);
c++;
}
while (d <= 'Z')
{
putchar(c);
d++;
}
putchar('\n');
return (0);
}
