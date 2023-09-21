#include "lists.h"
/**
 * print_list - to print elements of a list_t list
 * @h: the list to print
 * Return: return (number of nodes)
*/
size_t print_list(const list_t *h)
{
	size_t num_node = 0;

	if (h == NULL)
	{
		return (0);
	}
	for (num_node = 0; h->next != NULL; num_node++)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else if (h->str != NULL)
		{
			printf("[%u] %s\n", h->len, h->str);
		}
		h = h->next;
	}
	printf("[%u] %s\n", h->len, h->str);
	h = h->next;
	num_node++;
	return (num_node);
}
