#include "lists.h"

/**
 * list_len - counts number of elements in a linked list
 * @h: head pointer
 *
 * Returns: number of elements
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;
	const list_t *temp = h;

	while (temp != NULL)
	{
		temp = temp->next;
		count++;
	}
	return (count);
}
