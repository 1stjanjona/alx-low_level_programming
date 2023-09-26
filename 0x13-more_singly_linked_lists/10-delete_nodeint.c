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

	if (*head == NULL || head == NULL)
	{
		return (-1);
	}
	dlt = *head;
	if (index == 0)
	{
		*head = dlt->next;
		free(dlt);
		return (1);
	}
	while (ndx < (index - 1) && dlt != NULL)
	{
		dlt = dlt->next;
		ndx++;
	}
	if (dlt == NULL || dlt->next == NULL)
	{
		return (-1);
	}
	pass = dlt->next;
	dlt->next = pass->next;
	free(pass);
	return (1);
}
