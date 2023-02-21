#include "main.h"
/**
 * print_alphabet_x10 - printing alphabets 10 times
 * Return: 0 always
 */
void print_alphabet_x10(void)
{
char c = 'a';
int a = 10;
for (a = 0; a < 10; a++)
{
for (c = 'a'; c <= 'z'; c++)
{
_putchar(c);
_putchar('\n');
}
}
}
