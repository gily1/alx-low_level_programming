#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include<string.h>
/**
 * create_file - function name used to creat file
 * @filename : value for name of file
 * @text_content : content of the file
 * Return: 1 if succesful otherwise -1
 */
int create_file(const char *filename, char *text_content)
{
if (filename == NULL)
{
return (-1);
}
mode_t mode = S_IRUSR | S_IWUSR;
int lags = O_CREAT | O_WRONLY | O_TRUNC;
int d = open(filename, lags, mode);
if (d == -1)
{
return (-1);
}
if (text_content != NULL)
{
int n = write(d, text_content, strlen(text_content));
if (n == -1)
{
close(d);
return (-1);
}
}
close(d);
return (1);
}

