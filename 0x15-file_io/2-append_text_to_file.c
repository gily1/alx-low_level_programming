#include <fcntl.h>
#include <unistd.h>
#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: name of the file
 * @text_content: NULL terminated string to add at the end of the file
 *
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
int file, a, i = 0;
if (filename == NULL)
return (-1);
if (text_content != NULL)
{
while (text_content[i])
i++;
}
file = open(filename, O_WRONLY | O_APPEND);
if (file == -1)
return (-1);
if (text_content != NULL)
{
a = write(file, text_content, i);
if (a == -1)
{
close(file);
return (-1);
}
}
close(file);
return (1);
}
