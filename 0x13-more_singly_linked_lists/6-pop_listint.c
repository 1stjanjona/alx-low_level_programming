#include "lists.h"
/**
 * pop_listint - delete head node
 * @head: double pointer to head list
 * Return: return (n), otherwise return (0)
*/
int pop_listint(listint_t **head)
{
	listint_t *current;
	int data_n;

	if (*head == NULL || head == NULL)
	{
		return (0);
	}
	current = *head;
	data_n = current->n;
	*head = current->next;
	free(current);

	return (data_n);
}
