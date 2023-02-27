#include "main.h"
#include<unistd.h>
/**
 * _putchar - writes charchter on screen
 * @c: the charcter to print
 *
 * Return: on success 1
 * on error, -1 is returned and error is a set set appropriate
 */
int _putchar(char c)
{
return (write(1, &c, 1));
}
