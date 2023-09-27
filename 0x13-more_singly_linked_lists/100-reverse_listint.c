#include "lists.h"
/**
 * *reverse_listint - reverse list
 * @head: double pointer to head list
 * Return: return pointer to the first node,
*/
listint_t *reverse_listint(listint_t **head)
{
	listint_t *rvrsd = NULL;
	listint_t *pass;

	while (*head != NULL && head != NULL)
	{
		pass = (*head)->next;
		(*head)->next = rvrsd;
		rvrsd = (*head);
		(*head) = pass;
	}
	(*head) = rvrsd;
	return (rvrsd);
}
