#include "main.h"
/**
 * factorial - fucntion for factorial computing
 * @n: number to be factorialized
 * Return: int.
 */

int factorial(int n)
{
if (n < 0)
{
	return (-1);
}
else if (n <= 1)
{
	return (1);
}
return (n * factorial(n - 1));
}
