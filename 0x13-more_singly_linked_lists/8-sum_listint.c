#include "lists.h"
/**
 * sum_listint - sum all the data (n)
 * @head: pointer to head list
 * Return: return (sum data n), otherewise return (n)
*/
int sum_listint(listint_t *head)
{
	listint_t *pass;
	int sum_n = 0;

	pass = head;
	while (pass != NULL)
	{
		sum_n += pass->n;
		pass = pass->next;
	}
	return (sum_n);
}
