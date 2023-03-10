#include <stdlib.h>
#include <string.h>
/**
 * argstostr - function for concatanating strings
 *@ac: string
 *@av: pointer
 *Return:something
 */
char *argstostr(int ac, char **av)
{
int i;
char *str;
size_t len, pos, total_len;
if (ac == 0 || av == NULL)
{
return (NULL);
}
total_len = 0;
for (i = 0; i < ac; i++)
{
total_len += strlen(av[i]) + 1;
}
str = (char *) malloc(sizeof(char) * total_len + 1);
if (str == NULL)
{
return (NULL);
}
pos = 0;
for (i = 0; i < ac; i++)
{
len = strlen(av[i]);
memcpy(str + pos, av[i], len);
pos += len;
str[pos++] = '\n';
}
str[pos] = '\0';
return (str);
}

