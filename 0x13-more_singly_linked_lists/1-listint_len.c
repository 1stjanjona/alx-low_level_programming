#include "lists.h"
/**
 * listint_len - elements in linked list
 * @h: poinetr to h the list
 * Return: return (number of the elements linked)
*/
size_t listint_len(const listint_t *h)
{
	size_t n = 0;

	while (h)
	{
		n++;
		h = h->next;
	}
	return (n);
}
