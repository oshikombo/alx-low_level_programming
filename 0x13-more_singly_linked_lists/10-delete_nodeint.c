#include "lists.h"

/**
 * delete_nodeint_at_index - deletes a node at given index in a listint_t list.
 * @head: pointer to pointer to first node in the listint_t list.
 * @index: index of the node that should be deleted, starting at 0.
 *
 * Return: 1 if it succeeded, -1 if it failed.
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int count = 0;
	listint_t *prev_node;
	listint_t *node_after;

	if (head == NULL)
		return (-1);

	if (*head == NULL)
		return (-1);

	prev_node = *head;
	if (index == 0)
	{
		*head = (*head)->next;
		free(prev_node);
		return (1);
	}
	while (prev_node != NULL && count != index - 1)
	{
		count++;
		prev_node = prev_node->next;
	}
	if (count == index - 1 && prev_node != NULL && prev_node->next != NULL)
	{
		node_after = (prev_node->next)->next;
		free(prev_node->next);
		prev_node->next = node_after;
		return (1);
	}
	return (-1);
}

