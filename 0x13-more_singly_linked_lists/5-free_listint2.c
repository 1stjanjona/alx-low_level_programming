#include "lists.h"
/**
 * free_listint2 - free list
 * @head: double pniter head to list
 * Return: no return
*/
void free_listint2(listint_t **head)
{
	listint_t *current;

	if (head == NULL)
	{
		head = NULL;
	}
	while (*head != NULL)
	{
		current = (*head)->next;
		free(*head);
		*head = current;
	}
}
