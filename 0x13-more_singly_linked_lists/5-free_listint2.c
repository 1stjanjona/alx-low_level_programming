#include "lists.h"
/**
 * free_listint2 - free list
 * @head: double pniter head to list
 * Return: no return
*/
void free_listint2(listint_t **head)
{
	listint_t *current;
	listint_t *pass;

	if (head == NULL)
	{
		return;
	}
	current = *head;
	while (current != NULL)
	{
		pass = current->next;
		free(current);
		current = pass;
	}
	*head = NULL;
}
