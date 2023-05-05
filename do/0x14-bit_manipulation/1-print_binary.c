#include <stdio.h>
#include "main.h"
/**
 * print_binary - Prints the binary representation of a number.
 * @n: The number to print in binary.
 */
void print_binary(unsigned long int n)
{
unsigned long int b = 1;
int bit_count = (sizeof(unsigned long int) * 8) - 1;
int print = 0;
while (bit_count >= 0)
{
if ((n & (b << bit_count)) >> bit_count == 1)
{
putchar('1');
print = 1;
}
else if (print == 1)
{
putchar('0');
}
bit_count--;
}
if (print == 0)
{
putchar('0');
}
}
