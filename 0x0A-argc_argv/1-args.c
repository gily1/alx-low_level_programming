#include <stdio.h>
#include "main.h"
/**
 * main - function for counting nbr of arguments
 *@argc: argument counter
 @argv: argument vector
 *Return: o broh
 */
int main(int argc, char *argv[])
{
	(void) argv;
    printf("%d\n", argc - 1);
    return (0);
}

