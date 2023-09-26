#include "lists.h"
/**
 * *insert_nodeint_at_index - insert a new node at a given position
 * @head: double pointer to head list
 * @idx: index of the new node
 * @n: data n for the new node
 * Return: return (new node), otherwise return (NULL)
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *pass;
	listint_t *nsrt;
	unsigned int x = 0;

	nsrt = malloc(sizeof(listint_t));
	if (nsrt == NULL || head == NULL)
	{
		return (NULL);
	}
	pass = *head;
	nsrt->n = n;
	nsrt->next = NULL;
	if (idx == 0)
	{
		nsrt->next = pass;
		pass = nsrt;
		return (nsrt);
	}
	while (x < idx)
	{
		if (x == idx - 1)
		{
			nsrt->next = pass->next;
			pass->next = nsrt;
			return (nsrt);
		}
		x++;
	}
	return (NULL);
}
