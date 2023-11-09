#include "lists.h"
/**
 * sum_dlistint - return the sum of data(n)
 * @head: pointer to head
 * Return: return sum of data(n), or return (0)
*/
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (!head)
	{
		return (0);
	}
	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
