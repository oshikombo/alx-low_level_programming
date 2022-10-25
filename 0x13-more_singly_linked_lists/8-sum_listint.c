#include "lists.h"

/**
 * sum_listint - sums all the data (n) of a listint_t linked list.
 * @head: pointer to the first node in the listint_t linked list.
 *
 * Return: int sum of the data (n) in the list, 0 if the list is empty.
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);

	while (head != NULL)
	{
		sum = sum + head->n;
		head = head->next;
	}

	return (sum);
}

