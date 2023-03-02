#include"main.h"
#include<stdio.h>
/**
 * reverse_array - function to hold statmnets for reversing array
 * @a: first array
 * @n: number of element in array
 * Return: new arraye after reverse
 */
void reverse_array(int *a, int n)
{
int tmp;
int i;
for (i = n - 1; i >= n / 2; i--)
{
tmp = a[n - 1 - i];
a[n - 1 - i] = a[i];
a[i] = tmp;
}
}
