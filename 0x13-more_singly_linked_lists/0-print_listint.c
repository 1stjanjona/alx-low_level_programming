#include "lists.h"
/**
 * print_listint - print all the elements
 * @h: pointer to h the list
 * Return: return (number of nodes)
*/
size_t print_listint(const listint_t *h)
{
	size_t n = 0;

	while (h)
	{
		printf("%d\n", h->n);
		n++;
		h = h->next;
	}
	return (n);
}
