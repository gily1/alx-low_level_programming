#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * sum_them_all - function name for summing numbers
 * @n: number of value to sum
 * Return: sum
  */
int sum_them_all(const unsigned int n, ...)
{
if (n == 0)
return (0);
unsigned int sum = 0;
va_list args;
va_start(args, n);
unsigned int  i;
for (i = 0; i < n; i++)
{
sum += va_arg(args, int);
}
va_end(args);
return (sum);
}

