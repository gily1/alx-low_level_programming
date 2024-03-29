#include<stdio.h>
#include"main.h"
/**
 * flip_bits - Returns the number of bits you would need to flip to get from
 *             one number to another.
 * @n: The first number.
 * @m: The second number.
 *
 * Return: The number of bits needed to flip.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned long int y = n ^ m;
unsigned int count = 0;
while (y > 0)
{
if ((y & 1) == 1)
count++;
y = y >> 1;
}
return (count);
}

