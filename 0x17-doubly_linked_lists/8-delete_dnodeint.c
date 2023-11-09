#include "lists.h"
/**
 * delete_dnodeint_at_index - delete the node at index of dlistint_t
 * @head: double pointer to head
 * @index: indexof the node to be deleted
 * Return: return (1) on success, return (-1) on fail
*/
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *del_node = *head;

	if (!(*head))
	{
		return (-1);
	}
	for (; index != 0; index--)
	{
		if (del_node == NULL)
		{
			return (-1);
		}
		del_node = del_node->next;
	}
	if (del_node == *head)
	{
		*head = del_node->next;
		if (*head)
		{
			(*head)->prev = NULL;
		}
	}
	else
	{
		if (del_node->prev)
		{
			del_node->prev->next = del_node->next;
		}
		if (del_node->next)
		{
			del_node->next->prev = del_node->prev;
		}
	}
	free(del_node);
	del_node = NULL;
	return (1);
}
