#include "main.h"
/**
 * print_sign - printing the sign of
 * a number entred
 * @n:holding the nbr
 * Return: 1 if postive 0 if zero and -1 if below zero
 */
int print_sign(int n)
{
if (n > 0)
{
putchar('+')
return (1);
}
else if (n < 0)
{
putchar('-');
return ('-1');
}
else
(n = 0)
{
putchar('0');
return (0);
}
}
