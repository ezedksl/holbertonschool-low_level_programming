#include "lists.h"
/**
 * insert_dnodeint_at_index - Insert node at given position
 * @h: head of list
 * @idx: index (position to add node to)
 * @n: data to store in the new node
 * Return: new node or null if error
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *head = *h;

	if (!*h)
		new = add_dnodeint(h, n);
	while (idx--)
	{
		if (!head->next)
			return (NULL);
		head = head->next;
	}
	if (!head->next && head->prev != NULL)
	{
		new = add_dnodeint_end(h, n);
	}
	else if (head->prev == NULL || !head)
	{
		new = add_dnodeint(h, n);
	}
	else
	{
		new = malloc(sizeof(dlistint_t));
		if (!new)
			return (NULL);
		new->n = n;
		new->next = head;
		new->prev = head->prev;
		head->prev->next = new;
		head->next->prev = new;
	}
	return (new);
}
