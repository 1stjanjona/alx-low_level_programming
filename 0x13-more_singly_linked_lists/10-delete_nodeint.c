#include "lists.h"
/**
 * delete_nodeint_at_index - delete the node at index of list
 * @head: double pointer to head list
 * @index: index of node to be deleted
 * Return: return (1) on success, if it fails return (-1)
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *pass;
	listint_t *dlt;
	unsigned int ndx = 0;

	dlt = malloc(sizeof(listint_t));
	if (dlt == NULL)
	{
		return (1);
	}
	if (*head == NULL)
	{
		return (-1);
	}
	pass = *head;
	if (index == 0)
	{
		pass = pass->next;
		free(pass);
		return (1);
	}
	while (ndx < (index - 1))
	{
		if (pass == NULL || (pass->next) == NULL)
		{
			return (-1);
		}
		pass = pass->next;
		ndx++;
	}
	dlt = pass->next;
	pass->next = dlt->next;
	free(dlt);
	return (1);
}
