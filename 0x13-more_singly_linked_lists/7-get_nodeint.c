#include "lists.h"

/**
 * get_nodeint_at_index - finds the nth node of the linked list
 * @head: head node
 * @index: index of node
 *
 * Return: nth node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp = head;
	unsigned int count = 0;

	if (!head)
		return (NULL);

	while (temp && count < index)
	{
		count++;
		temp = temp->next;
	}
	
	return (temp);
}
