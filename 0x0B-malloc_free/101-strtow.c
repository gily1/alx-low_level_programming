#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int count_words(char *str);
char **split_words(char *str, int num_words);

/**
 * strtow - function that splits a string into words
 * @str: string to split
 * Return: pointer to an array of strings (words)
 */
char **strtow(char *str)
{
int num_words;
if (str == NULL || *str == '\0')
{
return (NULL);
}
num_words = count_words(str);
if (num_words == 0)
return (NULL);
return (split_words(str, num_words));
}

/**
 * count_words - counts the number of words in a string
 * @str: string to count words in
 * Return: number of words in the string
 */
int count_words(char *str)
{
int num_words = 0;
while (*str != '\0')
{
while (isspace(*str))
str++;
if (*str != '\0')
num_words++;
while (*str != '\0' && !isspace(*str))
str++;
}
return (num_words);
}

/**
 * split_words - splits a string into words and stores them in an array
 * @str: string to split
 * @num_words: number of words in the string
 * Return: pointer to an array of strings (words)
 */
char **split_words(char *str, int num_words)
{
int j, i;
char *word;
char **words = malloc((num_words + 1) * sizeof(char *));
if (words == NULL)
return (NULL);
i = 0;
while (*str != '\0')
{
while (isspace(*str))
str++;
if (*str != '\0')
{
char *word_start = str;
int word_len = 0;
while (*str != '\0' && !isspace(*str))
{
word_len++;
str++;
}
word = malloc((word_len + 1) * sizeof(char));
if (word == NULL)
{
for (j = 0; j < i; j++)
free(words[j]);
free(words);
return (NULL);
}
strncpy(word, word_start, word_len);
word[word_len] = '\0';
words[i] = word;
i++;
}
}
words[i] = NULL;
return (words);
}

