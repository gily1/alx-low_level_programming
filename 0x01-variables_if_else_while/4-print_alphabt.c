#include<stdlib.h>
#include<stdio.h>
/**
 * main - printing alphabets except q and e
 * Return: 0 always
 */
int main(void)
{
char c = 'a';
while (c <= 'z')
{
if ((c != 'q' && c != 'e') && c <= 'z')
putchar(c);
c++;
}
putchar('\n');
return (0);
}
