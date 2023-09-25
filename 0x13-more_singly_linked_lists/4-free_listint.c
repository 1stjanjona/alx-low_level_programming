#include "lists.h"
/**
 * free_listint - free list
 * @head: head of list
 * Return: no return
*/
void free_listint(listint_t *head)
{
	listint_t *current;

	while (head != NULL)
	{
		current = head->next;
		free(head);
		head = current;
	}
}
