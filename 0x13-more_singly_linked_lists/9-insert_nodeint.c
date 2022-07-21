#include "lists.h"

/**
 * insert_nodeint_at_index - inserts node at an index
 * @head: head node
 * @idx: index
 * @n: newnode data
 *
 * Return: address of new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *temp = *head;
	unsigned int i = 0;
	unsigned int count;
	listint_t *newnode;

	newnode = malloc(sizeof(listint_t));
	newnode->n = n;
	newnode->next = NULL;

	if (!head || !newnode)
		return (NULL);
	
	while (temp)
	{
		temp = temp->next;
		count++;
	}

	if (idx > count)
		return (NULL);

	else if (idx == 0)
	{
		newnode->next = *head;
		*head = newnode;
		return (newnode);
	}
	else
	{
		while (i < idx - 1)
		{
			temp = temp->next;
			i++;
		}
		newnode->next = temp->next;
		temp->next = newnode;
		return (newnode);
	}
}
