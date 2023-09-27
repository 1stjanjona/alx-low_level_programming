#include "lists.h"
/**
 * print_listint_safe - print list
 * @head: pointer to head list
 * Return: return number of nodes, else exit(98)
*/
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *sf;
	const listint_t *nsf;
	size_t nmbr = 0;

	sf = nsf = head;
	while (sf != NULL && sf->next != NULL)
	{
		printf("[%p] %d\n", (void *)sf, sf->n);
		nmbr++;
		sf = sf->next;
		nsf = nsf->next->next;
		if (sf == nsf)
		{
			printf("-> [%p] %d\n", (void *)sf, sf->n);
			nmbr++;
			break;
		}
	}
	return (nmbr);
}
