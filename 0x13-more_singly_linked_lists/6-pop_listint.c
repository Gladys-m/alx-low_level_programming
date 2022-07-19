#include "lists.h"

/**
 * pop_listint - deletes head node of a linked list
 * @head: head node
 *
 * Return: head node data
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int data;

	if (head == NULL)
		return (0);
	temp = *head;
	data = temp->n
	*head = (*head)->next;
	free (temp);

	return (data);
}
