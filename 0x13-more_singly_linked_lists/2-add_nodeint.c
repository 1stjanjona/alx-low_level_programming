#include "lists.h"
/**
 * *add_nodeint - add node to the beginning
 * @head: head of the list
 * @n: data for the new node
 * Return: return (address of the new element), otherwise return (NULL)
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_element;

	new_element = malloc(sizeof(listint_t));
	if (new_element == NULL)
	{
		return (NULL);
	}
	new_element->n = n;
	new_element->next = *head;
	*head = new_element;
	return (new_element);
}
