#include "lists.h"
/**
 * list_len - print number of elements
 * @h: list to print its numbers
 * Return: return (number of elemets)
*/
size_t list_len(const list_t *h)
{
	size_t num_node = 0;

	if (h == NULL)
	{
		return (0);
	}
	for (num_node = 0; h->next != NULL; num_node++)
	{
		h = h->next;
	}
	num_node++;
	return (num_node);
}
