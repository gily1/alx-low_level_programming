#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * is_positive_integer - function
 * @n: charcter
 * Return:results
 */
int is_positive_integer(char *n)
{
	int i;
for (i = 0; n[i] != '\0'; i++)
{
if (n[i] < '0' || n[i] > '9')
{
return (0);
}
}
return (atoi(n) > 0);
}
int multiply(char *num1, char *num2)
{
return (atoi(num1) * atoi(num2));
}

int main(int argc, char **argv)
{
int result;
unsigned int invalid_argc = (argc != 3);
unsigned int invalid_arg1 = !is_positive_integer(argv[1]);
unsigned int  invalid_arg2 = !is_positive_integer(argv[2]);
if (invalid_argc || invalid_arg1 || invalid_arg2)
{
printf("Error\n");
return (98);
}
result = multiply(argv[1], argv[2]);
printf("%d\n", result);
return (0);
}

