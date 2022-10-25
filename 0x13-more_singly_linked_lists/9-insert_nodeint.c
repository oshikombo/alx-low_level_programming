#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position.
 * @head: pointer to the first node in the linked listint_t list.
 * @idx: index of the list where the new node should be added, starting at 0.
 * @n: int value to be assigned to the new added node
 *
 * Return: the addres of the new node, or NULL if it failed.
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int count = 0;
	listint_t *new = NULL;
	listint_t *node = NULL;

	if (head == NULL || (*head == NULL && idx != 0))
		return (NULL);

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;

	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}
	node = *head;
	while (node != NULL && count != idx - 1)
	{
		count++;
		node = node->next;
	}
	if (count == idx - 1 && node != NULL)
	{
		new->next = node->next;
		node->next = new;
		return (new);
	}
	free(new);
	return (NULL);
}

