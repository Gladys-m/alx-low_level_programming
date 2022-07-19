#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of linked list
 * @head: head node
 * @n: data to be checked
 *
 * Return: address of new element
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newnode;
	listint_t *temp = *head;

	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
		return (NULL);
	newnode->n = n;
	newnode->next = 0;
	while (temp->next != 0)
	{
		temp = temp->next;
	}
	temp->next = newnode;

	return (newnode);
}
