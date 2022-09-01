#include "lists.h"
/**
 * dlistint_len - returns no of elements of a doubly linked list
 * @h: head pointer
 *
 * Return: number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;
	const dlistint_t *temp = h;

	if (temp == NULL)
		return (count);

	while (temp != NULL)
	{
		temp = temp->next;
		count++;
	}
	return (count);
}
