#include<stdio.h>
#include"main.h"
int main(void)
{
int n;
int s;
int a[s];
int *p;
a[2] = 1024;
p = &n;
/**
 * main - body of codes for magic
 * p modification not allowed
 * Return: 0
 */
*(p + s) = 98;
/*so that prints 98\n*/
printf("a[2] = %d\n", a[2]);
return (0);
}
