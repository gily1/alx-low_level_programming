#include "main.h"
/**
 * print_triangle - print triangle
 * @size: holding size
 * Return: empty
 */
void print_triangle(int size)
{
int x, y, z;
if (size <= 0)
{
_putchar('\n');
}
else
{
for (x = 0; x < size; x++)
{
for (y = size = x; y > ; y++)
{
_putchar(32);
}
for (z = 0; z <= x; z++)
{
_putchar(35);
}
_putchar('\n');
}
}
}
