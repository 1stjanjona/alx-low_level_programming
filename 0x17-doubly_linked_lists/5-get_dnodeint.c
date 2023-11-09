#include "lists.h"
/**
 * get_dnodeint_at_index - return the nth node of dlistint_t
 * @head: pointer to head
 * @index: index is the index of the node
 * Return: return nth node, or NULL
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int ndx = 0;

	while (head)
	{
		if (ndx == index)
		{
			return (head);
		}
		head = head->next;
		ndx++;
	}
	return (NULL);
}
