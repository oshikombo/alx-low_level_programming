#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list.
 * @head: pointer to the first node of the listint_t list.
 * @index: index of the node to get, starting at 0.
 *
 * Return: a listint_t pointer to the index-th in the listint_t list.
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;

	if (head == NULL)
		return (NULL);

	while (head != NULL && count != index)
	{
		count++;
		head = head->next;
	}

	if (count == index)
		return (head);

	return (NULL);
}

