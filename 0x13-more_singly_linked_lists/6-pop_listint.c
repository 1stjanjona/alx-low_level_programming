#include "lists.h"
/**
 * pop_listint - delete head node
 * @head: double pointer to head list
 * Return: return (n), otherwise return (0)
*/
int pop_listint(listint_t **head)
{
	listint_t *current;
	listint_t *pass;
	int data_n;

	if (*head == NULL || head == NULL)
	{
		return (0);
	}
	current = *head;
	while (current != NULL)
	{
		data_n = current->n;
		pass = current->next;
		free(current);
		current = pass;
	}
	return (data_n);
}
