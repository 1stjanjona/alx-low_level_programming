#include "lists.h"
/**
 * *get_nodeint_at_index - return the nth node
 * @head: pointer to head list
 * @index: index of the node
 * Return: return (index), otheriwise return (NULL)
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *pass;
	unsigned int ndx = 0;

	pass = head;
	if (pass == NULL)
	{
		return (NULL);
	}
	while (pass != NULL && ndx < index)
	{
		pass = pass->next;
		ndx++;
	}
	return (pass);
}
