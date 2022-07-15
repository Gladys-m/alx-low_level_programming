#include "lists.h"
/**
 * print_list - prints all elements of a linked list
 * @h: head pointer
 *
 * Return: number of elements in the list
 */
size_t print_list(const list *h)
{
	size_t count;
	list_t *temp;
	count = 0;
	temp = h;

	while (temp != NULL)
	{
		if (temp->str == NULL)
			printf("[%d] %s\n", 0, "(nil)");
		else
		{
			printf("[%d] %s\n", temp->len, temp->str);
		}
		temp = temp->next;
		count++;
	}
	return (count);
}
