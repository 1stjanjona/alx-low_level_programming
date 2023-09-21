#include "lists.h"
/**
 * free_list - free list_t
 * @head: pointer to list_t
 * Return: no return
*/
void free_list(list_t *head)
{
	list_t *now, *later;

	now = head;
	while (head != NULL && now != NULL)
	{
		later = now->next;
		free(now->str);
		free(now);
		now = later;
	}
	head = NULL;
}
