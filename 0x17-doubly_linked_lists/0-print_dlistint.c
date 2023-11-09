#include "lists.h"
/**
 * print_dlistint - print all the elements in dlistint_t list
 * @h: &head
 * Return: number of nodes
*/
size_t print_dlistint(const dlistint_t *h)
{
	size_t num = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		num++;
	}
	return (num);
}
