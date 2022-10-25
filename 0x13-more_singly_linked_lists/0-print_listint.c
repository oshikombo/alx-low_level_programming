#include "lists.h"

/**
 * print_listint - prints all the elements of a listint_t list.
 * @h: pointer to first node of a listint_t list.
 *
 * Return: a size_t number representing the amount of nodes in the list.
 */

size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	if (h == NULL)
		return (0);

	while (h->next != NULL)
	{
		count++;
		printf("%d\n", h->n);
		h = h->next;
	}

	count++;
	printf("%d\n", h->n);

	return (count);
}

