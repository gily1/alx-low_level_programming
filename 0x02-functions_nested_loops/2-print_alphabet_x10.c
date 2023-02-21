#include "main.h"
/**
 * print_alphabet_x10 - printing alphabets 10 times
 * Return: 0 always
 */
void print_alphabet_x10(void)
{
char c = 'a';
int a = 10;
while (a < 10)
{
while (c < 'z')
{
_putchar(c);
c++;
}
a++;
}
_putchar('\n');
}
