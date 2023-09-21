#include "lists.h"
/**
 * *add_node - add new node to the beginning of list_t
 * @head: doubled pointer to list
 * @str: string to add
 * Return: new element, on fail return NULL
*/
list_t *add_node(list_t **head, const char *str)
{
	list_t *nouveaux;
	unsigned int len = 0;

	while (*head != NULL && str[len] != '\0')
	{
		len++;
	}
	nouveaux = malloc(sizeof(list_t));
	if (nouveaux == NULL)
	{
		return (0);
	}
	if (*head == NULL)
	{
		nouveaux->next = NULL;
	}
	if (nouveaux != NULL && str != NULL)
	{
		nouveaux->next = *head;
		nouveaux->str = strdup(str);
		nouveaux->len = len;
		nouveaux->next = *head;
		*head = nouveaux;
	}
	return (*head);
}
