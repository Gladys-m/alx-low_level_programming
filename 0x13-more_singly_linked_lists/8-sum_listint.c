#include "lists.h"

/**
 * sum_listint - finds the sum of data in linked list
 * @head - head node
 *
 * Return: sum of all nodes
 */
int sum_listint(listint_t *head)
{
	listint_t temp = head;
	int sum = 0;

	if (!head)
		return (0);
	while (temp != NULL)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}
