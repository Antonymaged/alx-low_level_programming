#include "lists.h"

#include "lists.h"

/**
 * print_dlistint - prints all the elements of a
 * dlistint_t list
 * @h: head of the list
 * Return: the number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
int c;
c = 0;
if (h == NULL)
return (c);
else
{
while (h->prev != NULL)
h = h->prev;
while (h != NULL)
{
printf("%d\n", h->n);
count++;
h = h->next;
}
}
return (c);
}
