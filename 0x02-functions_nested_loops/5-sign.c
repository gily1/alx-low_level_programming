#include"main.h"
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
_putchar(43);
return (1);
}
else if (n < 0)
{
_putchar(45);
return (-1);
}
else
{
_putchar(48);
return (0);
}
}
