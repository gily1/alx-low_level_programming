#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include "lists.h"

/**
 * print_listint - prints all the elements of a list_t list
 * @h: pointer to the head node of the linked list
 *
 * Return: the number of nodes in the linked list
 */
size_t print_listint(const listint_t *h)
{
size_t num = 0;
while (h)
{
printf("%d\n", h->n);
num++;
h = h->next;
}
return (num);
}

