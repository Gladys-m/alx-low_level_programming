#include "lists.h"
/**
 * print_dlistint - prints elements of a doubly linked list
 * @h: head pointer
 *
 * Return: number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;
	const dlistint_t *temp = h;

	if (temp == NULL)
		return (count);

	while (temp != NULL)
	{
		printf("%d", temp -> n);
		temp = temp -> next;
		count++;
	}

	return (count);
}
