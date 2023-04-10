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
int f, wri, len = 0;
if (filename == NULL)
return (-1);
if (text_content != NULL)
{
for (len = 0; text_content[len];)
len++;
}
f = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
wri = write(f, text_content, len);

if (f == -1 || wri == -1)
return (-1);
close(f);
return (1);
}

