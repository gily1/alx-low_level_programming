#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <sys/types.h>

#define BUFFER_SIZE 1024

/**
 * main - copies content of one file to another
 * @argc: number of arguments passed to program
 * @argv: array of strings containing arguments
 *
 * Return: 0 on success, or exit status on error
 */
int main(int argc, char *argv[])
{
int fd, to, ret_read, ret_write, ret_close;
char buffer[BUFFER_SIZE];
mode_t file_permissions = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;
if (argc != 3)
dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);
fd = open(argv[1], O_RDONLY);
if (fd == -1)
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]), exit(98);
to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, file_permissions);
if (to == -1)
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
while ((ret_read = read(fd, buffer, BUFFER_SIZE)) > 0)
{
ret_write = write(to, buffer, ret_read);
if (ret_write == -1)
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
}
if (ret_read == -1)
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]), exit(98);
ret_close = close(fd);
if (ret_close == -1)
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd), exit(100);
ret_close = close(to);
if (ret_close == -1)
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", to), exit(100);
return (0);
}

