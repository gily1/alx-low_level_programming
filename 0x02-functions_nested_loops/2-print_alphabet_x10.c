include "main.h"
/**
 * print_alphabet_x10 - printing alphabets 10 times
 * Return: 0 always
 */
void print_alphabte_x10(void)
{       
char c = 'a';
int a = 0;
for (a = 0; a < 10; a++)
{
while (c < 'z')
{
_putchar(c);
c++;
}
}
putchar('\n');
return (0);
}
