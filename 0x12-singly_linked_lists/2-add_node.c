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

	while (str && str[len] != '\0')
	{
		len++;
	}
	nouveaux = malloc(sizeof(list_t));
	if (nouveaux == NULL)
	{
		return (NULL);
	}
	nouveaux->str = strdup(str);
	if (nouveaux->str == NULL)
	{
		free(nouveaux);
		return (NULL);
	}
	nouveaux->len = len;
	nouveaux->next = *head;
	*head = nouveaux;

	return (*head);
}
