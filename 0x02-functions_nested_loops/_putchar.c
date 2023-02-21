#include<unistd.h>
/**
 * main - putchar writes the outputs to
 * stdout
 * @c: the charcter to print
 * Return: 1 on suceess
 * on error return, -1 is returned
 */
int _putchar(char c)
{
return(write(1, &c, 1));
}
