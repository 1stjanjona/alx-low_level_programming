#include "lists.h"
/**
 * *add_nodeint_end - add new to the end of the list
 * @head: head of the list
 * @n: the data to be added
 * Return: return (address of new element), otherwise return (NULL)
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_element;
	listint_t *current;

	new_element = malloc(sizeof(listint_t));
	if (new_element == NULL)
	{
		return (NULL);
	}
	new_element->n = n;
	new_element->next = NULL;
	if (*head == NULL)
	{
		*head = new_element;
	}
	else
	{
		current = *head;
		while (current->next != NULL)
		{
			current = current->next;
		}
		current->next = new_element;
	}
	return (new_element);
}
