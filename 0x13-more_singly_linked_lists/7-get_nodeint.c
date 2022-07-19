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

	while (temp != NULL)
	{
		if (count == index)
			return (temp);
		count++;
		temp = temp->next;
	}
	
	if (!temp)
		return  NULL;
}
