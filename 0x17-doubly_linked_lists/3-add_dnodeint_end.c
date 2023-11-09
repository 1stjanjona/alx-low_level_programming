#include "lists.h"
/**
 * add_dnodeint_end - add node at the end of dlistint_t
 * @head: &head
 * @n: number of nodes
 * Return: &new_node, or NULL on fail
*/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node, *link;

	new_node = malloc(sizeof(dlistint_t));

	if (!head || !new_node)
	{
		if (new_node)
		{
			free(new_node);
			new_node = NULL;
			return (NULL);
		}
		return (NULL);
	}
	new_node->n = n;
	new_node->next = NULL;
	if (!*head)
	{
		new_node->prev = NULL;
		*head = new_node;
	}
	else
	{
		link = *head;
		while (link->next)
		{
			link = link->next;
		}
		link->next = new_node;
		new_node->prev = link;
	}
	return (new_node);
}
