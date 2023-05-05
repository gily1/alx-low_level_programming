#include<stdio.h>
#include"main.h"
/**
 * set_bit - Sets the value of a bit to 1 at a given index.
 * @n: A pointer to the number to set the bit in.
 * @index: The index of the bit .
 *
 * Return:if yes return 1 or -1 if not working.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
if (index >= (sizeof(unsigned long int) * 8))
return (-1);
*n |= (1 << index);
return (1);
}

