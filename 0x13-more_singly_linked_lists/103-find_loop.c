#include "lists.h"
/**
 * *find_listint_loop - find lopp in list
 * @head: pointer tho head list
 * Return: address of node or NULL
*/
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *lp;
	listint_t *oo;

	if (head == NULL)
	{
		return (NULL);
	}
	while (lp != NULL && oo != NULL && oo->next != NULL)
	{
		oo = oo->next->next;
		lp = lp->next;
	}
	if (oo == lp)
	{
		lp = head;
	}
	else
	{
		lp = lp->next;
		oo = oo->next;
	}
	return (NULL);
}
