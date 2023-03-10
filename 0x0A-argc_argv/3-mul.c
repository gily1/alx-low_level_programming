#include"main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main- adding numbers
 * @argv:vector
 * @argc:arguments conter
 * Return: sum
 */
int main(int argc, char *argv[])
{
int i;
int j;
int mult = 1;
if (argc == 1)
{
printf("Error\n");
return (0);
}
for (i = 1; i < argc; i++)
{
for (j = 0; argv[i][j] != '\0'; j++)
{
if (!isdigit(argv[i][j]))
{
printf("Error\n");
return (1);
}
}
mult *= atoi(argv[i]);
}
printf("%d\n", mult);
return (0);
}

