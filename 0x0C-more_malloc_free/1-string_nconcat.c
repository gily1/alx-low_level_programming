#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 * string_nconcat - function to append two strings
 * @s1: frst string
 * @s2: second string
 * @n: size of strings
 * Return: new string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int s1_length;
	unsigned int i;
	unsigned int s2_length;
	char *s;

	s1_length =  strlen(s1);
        s2_length = strlen(s2);
	s = malloc(s1_length + n + 1);
	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
	s2= "";
	}
	if (!s)
		return (NULL);

	for (i = 0; i < s1_length; i++)
	{
		s[i] = s1[i];
	}
	for (i = 0; i < s2_length; i++)
	{
	s[s1_length + i] = s2[i];
	}
	s[s1_length + n] = '\0';
	return (s);


}
