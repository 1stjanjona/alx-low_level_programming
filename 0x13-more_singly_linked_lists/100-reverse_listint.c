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
	listint_t *current;

	current = *head;
	while (current != NULL)
	{
		pass = current->next;
		current->next = rvrsd;
		rvrsd = current;
		current = pass;
	}
	*head = rvrsd;
	return (rvrsd);
}
