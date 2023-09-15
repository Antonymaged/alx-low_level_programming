#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at index of a
 * dlistint_t linked list
 * @head: head of the list
 * @index: index of the new node
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
dlistint_t *p1;
dlistint_t *p2;
unsigned int e;
p1 = *head;
if (p1 != NULL)
while (p1->prev != NULL)
p1 = p1->prev;
e = 0;
while (p1 != NULL)
{
if (e == index)
{
if (e == 0)
{
*head = p1->next;
if (*head != NULL)
(*head)->prev = NULL;
}
else
{
2->next = p1->next;
if (p1->next != NULL)
p1->next->prev = p2;
}
free(p1);
return (1);
}
p2 = p1;
p1 = p1->next;
e++;
}
return (-1);
}
