#include<stdio.h>
/**
 * swap_int - swapping numbers
 * @a: holding a frst number
 * @b: holding scnd number
 * Return: 0 alwys
 */
void swap_int(int *a, int *b)
{
int temp = *a;
*a = *b;
*b = temp;
}
