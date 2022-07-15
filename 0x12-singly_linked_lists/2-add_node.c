#include "lists.h"

/**
 * add_node - adds a newnode at the beginning of a linked list
 * @head: head of linked list
 * @str: data to be stored
 *
 * Return: head pointer
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *newnode;
	size_t i = 0;

	newnode = malloc(sizeof(list_t));
	if (newnode == NULL)
		return (NULL);

	newnode->str = strdup(str);
	while (str[i] != '\0')
		i++;
	newnode->len = i;
	newnode->next = *head;
	*head = new;
	return(*head);
}
