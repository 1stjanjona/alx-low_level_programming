#include "lists.h"
/**
 * free_listint_safe - free list
 * @h: double pointer to node list
 * Return: return size of the list
*/
size_t free_listint_safe(listint_t **h)
{
	listint_t *fr;
	size_t z = 0;

	if (*h == NULL || h == NULL)
	{
		return (0);
	}
	while (*h)
	{
		fr = (*h)->next;
		free(*h);
		(*h) = fr;
		z++;
	}
	free(*h);
	(*h) = NULL;
	return (z);
}
