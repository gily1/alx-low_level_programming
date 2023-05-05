#include <stdio.h>
#include "main.h"
/**
 * clear_bit - Clears the value of a bit to 0 at a given index.
 * @n: A pointer to the number to clear the bit in.
 * @index: The index of the bit to clear.
 *
 * Return:1 if true and -1 if not working.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
if (index >= (sizeof(unsigned long int) * 8))
return (-1);
*n &= ~(1 << index);
return (1);
}

