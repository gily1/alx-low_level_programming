#include <stdlib.h>
#include"main.h"
/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: name of the file to be read
 * @letters: number of letters to read and print
 *
 * Return: the actual number of letters it could read and print, 0 on failure
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
char *buf;
ssize_t d;
ssize_t x;
ssize_t t;
d = open(filename, O_RDONLY);
if (d == -1)
return (0);
buf = malloc(sizeof(char) * letters);
t = read(d, buf, letters);
x = write(STDOUT_FILENO, buf, t);
free(buf);
close(d);
return (x);
}
