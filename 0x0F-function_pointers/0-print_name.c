#include "function_pointers.h"
	#include <stdio.h>
/**
 * print_name - function to hold codes for printing names
 * @name: name to be printed
 * @f: function pointer
 * Return: nothing
 */
void print_name(char *name, void (*f)(char *))
{
if (name == NULL || f == NULL)
return;
f(name);
}

