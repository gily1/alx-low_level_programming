#include<stdio.h>
#include "main.h"
/**
 * add_strings - fucntion for adding strings
 * @n1:frst to be added
 * @n2:scnd to be added
 * @r:the stored result of buffer
 * @r_index:second index
 * Return: addition.
 */
char *add_strings(char *n1, char *n2, char *r, int r_index)
{
int num, tens = 0;
for (; *n1 && *n2; n1--, n2--, r_index--)
{
num = (*n1 - '0') + (*n2 - '0');
num += tens;
*(r + r_index) = (num % 10) + '0';
tens = num / 10;
}
for (; *n1; n1--, r_index--)
{
num = (*n1 - '0') + tens;
*(r + r_index) = (num % 10) + '0';
tens = num / 10;
}
for (; *n2; n2--, r_index--)
{
num = (*n2 - '0') + tens;
*(r + r_index) = (num % 10) + '0';
tens = num / 10;
}
if (tens && r_index >= 0)
{
*(r + r_index) = (tens % 10) + '0';
return (r + r_index);
}
else if (tens && r_index < 0)
return (0);
return (r + r_index + 1);
}
/**
 * infinite_add - adds two numbers
 * @n1:frst nbr
 * @n2:scnd nubr
 * @r: buffer size to store
 * @size_r:buffer size
 * Return:add strig
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
int i, n = 0, l = 0;
for  (i = 0; *(n1 + i); i++)
l++;
for (i = 0; *(n2 + i); i++)
l++;
if (size_r <= n + 1 || size_r <= l + 1)
return (0);
n1 += n - 1;
n2 += l - 1;
*(r + size_r) = '\0';
return (add_strings(n1, n2, r, --size_r));
}
