#include "lists.h"
/**
 * free_list - free list_t
 * @head: pointer to list_t
 * Return: no return
*/
void free_list(list_t *head)
{
	list_t *now, *rand;

	now = head;
	while (now != NULL)
	{
		rand = now;
		now = now->next;
		free(rand->str);
		free(rand);
	}
}
