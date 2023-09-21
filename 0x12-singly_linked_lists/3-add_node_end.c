#include "lists.h"
/**
 * *add_node_end - add a node to the end of head
 * @head: doubled pointer to the head list
 * @str: string to be added
 * Return: return (*head), else return (NULL)
*/
list_t *add_node_end(list_t **head, const char *str)
{
	unsigned int len = 0;
	list_t *nwd = *head;
	list_t *nvx;

	while (str && str[len] != '\0')
	{
		len++;
	}
	if (str == NULL)
	{
		return (NULL);
	}
	nvx = malloc(sizeof(list_t));
	if (nvx == NULL)
	{
		return (NULL);
	}
	nvx->str = strdup(str);
	if (nwd->str == NULL)
	{
		free(nwd);
		return (NULL);
	}
	nvx->len = len;
	nvx->next = NULL;
	if (*head == NULL)
	{
		*head = nvx;
	}
	else
	{
		nwd = *head;
		while (nwd->next != NULL)
		{
			nwd = nwd->next;
		}
		nwd->next = nvx;
	}
	return (nvx);
}
