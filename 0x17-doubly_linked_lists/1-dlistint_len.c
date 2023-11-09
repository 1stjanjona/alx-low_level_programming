#include "lists.h"
/**
 * dlistint_len - print the number of elements in dlistint
 * @h: &head
 * Return: return number of elements
*/
size_t dlistint_len(const dlistint_t *h)
{
	size_t num = 0;

	while (h)
	{
		h = h->next;
		num++;
	}
	return (num);
}
