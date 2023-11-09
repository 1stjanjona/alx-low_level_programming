#include "lists.h"
/**
 * add_dnodeint - add new node t the beginning of dlistint_t
 * @head: double pointer of head
 * @n: number of nodes
 * Return: return &new_node, or NULL if failed
*/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

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
	new_node->prev = NULL;
	if (!*head)
	{
		*head = new_node;
		new_node->next = NULL;
	}
	else
	{
		new_node->next = *head;
		(*head)->prev = new_node;
		*head = new_node;
	}
	return (new_node);
}
