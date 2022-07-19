#include "lists.h"

/**
 * free_listint - function that frees a linked list
 * @head: head pointer
 *
 * Return: nothing
 */
void free_listint(listint_t *head)
{
	listint_t *temp = head;
	listint_t *aux;

	while (temp != NULL)
	{
		aux = temp;
		temp = temp->next;
		free (aux);
	}
}	
