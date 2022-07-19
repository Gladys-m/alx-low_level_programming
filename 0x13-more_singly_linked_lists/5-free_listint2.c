#include "lists.h"

/**
 * free_listint2 - frees a linked list
 * @head: head node
 *
 * Return: nothing
 */
void free_listint2(listint_t **head)
{
	listint_t *temp = *head;
	listint_t *aux;

	if (head == NULL)
		return;

	while (temp != NULL)
	{
		aux = temp;
		temp = temp->next;
		free(aux);
	}
	*head = NULL;
}
