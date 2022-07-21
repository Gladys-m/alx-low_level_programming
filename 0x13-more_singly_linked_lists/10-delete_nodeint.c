#include "lists.h"

/**
 * delete_nodeint_at_index - deletes node at position
 * @head:head node
 * @index: position of node
 *
 * Return: 1 if succeeded or (-1) if failed
 */
int delete_nodeint_at_index(listint_t **heead, unsigned int index)
{
	listint_t *temp = *head;
	listint_t *nextnode;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free (temp);
		return (1);
	}

	while (i < index - 1)
	{
		temp = temp->next;
		i++;
	}
	nextnode = temp->next;
	temp->next = nextnode->next;
	free (nextnode);

	return (1);
}
