#include<stdio.h>
/**
 * main - printing fibboncci series
 * Return: nothing
 */
int main(void)
{
int i = 0;
long j = 1, k = 2;
printf(", %ld", i);
printf(", %ld", j);
while (i < 50)
{
if (i == 0)
{
printf(", %ld", k);
}
else
{
k += j;
j = k - j;
printf(", %ld", k);
}
++i;
}
printf("\n");
return (0);
}
