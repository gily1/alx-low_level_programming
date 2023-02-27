#include<stdio.h>
#include "main.h"
/**
 * print_array - printing array with n elements
 * @a: array integers
 * @n: number of element of an array
 * Return: void
 */
void print_array(int *a, int n)
{
int j;
for (j = 0; j < n ; j++)
{
printf("%d", a[j]);
if  (j != (n - 1))
{
printf(", ");
}
}
printf("\n");
}
