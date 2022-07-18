#include "lists.h"
/**
 * print_list - prints all elements of a linked list
 * @h: head pointer
 *
 * Return: number of elements in the list
 */
size_t print_list(const list_t *h)
{
	size_t count = 0;
	const list_t *temp = h;

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
