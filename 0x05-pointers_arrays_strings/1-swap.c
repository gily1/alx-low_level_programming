#include<stdio.h>
/**
 * swap_int - swapping numbers
 * @a: holding a frst number
 * @b: holding scnd number
 * Return: 0 alwys
 */
void swap_int(int *a, int *b)
{
int a = 98;
int b = 42;
printf("a=%d, b=%d\n", a, b);
swap_int(&a, &b);
printf("a=%d, b=%d\n", a, b);
return (0);
}
