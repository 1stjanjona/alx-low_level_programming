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
	while (str && str[len] != '\0')
	{
		len++;
	}
	nvx->len = len;
	nvx->next = NULL;
	nwd = *head;
	if (nwd->str == NULL)
	{
		free(nwd);
		return (NULL);
	}
	if (*head == NULL)
	{
		*head = nvx;
	}
	else if (nwd != NULL)
	{
		while (nwd->next != NULL)
		{
			nwd = nwd->next;
		}
		nwd->next = nvx;
	}
	else
	{
		*head = nvx;
	}
	return (*head);
}
