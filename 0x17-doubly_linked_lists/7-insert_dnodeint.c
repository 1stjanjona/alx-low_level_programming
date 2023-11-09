#include "lists.h"
/**
 * insert_dnodeint_at_index - inserts a new node at given position
 * @h: double pointer to head
 * @idx: index of the list
 * @n: number of nodes
 * Return: return &new_node, or return NULL on fail
*/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *link = *h;

	if (idx == 0)
	{
		return (add_dnodeint(h, n));
	}
	for (; idx != 1; idx--)
	{
		link = link->next;
		if (link == NULL)
		{
			return (NULL);
		}
	}
	if (link->next == NULL)
	{
		return (add_dnodeint_end(h, n));
	}
	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
	{
		return (NULL);
	}
	new_node->n = n;
	new_node->prev = link;
	new_node->next = link->next;
	link->next->prev = new_node;
	link->next = new_node;
	return (new_node);
}
