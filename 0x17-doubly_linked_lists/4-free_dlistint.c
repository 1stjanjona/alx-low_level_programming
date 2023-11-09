#include "lists.h"
/**
 * free_dlistint - free dlistint_t
 * @head: pointer to head
 * Return: no return
*/
void free_dlistint(dlistint_t *head)
{
	dlistint_t *free_list;

	while (head)
	{
		free_list = head;
		head = head->next;
		free(free_list);
		free_list = NULL;
	}
}
