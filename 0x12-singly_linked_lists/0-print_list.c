#include "lists.h"
/**
 * print_list - prints all elements of a linked list
 * @h: linked list
 *
 * Return: number of elements in the list
 */
size_t print_list(const list *h)
{
	size_t count;
	count = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[%d] %s\n", 0, "(nil)");
		else
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		h = h->next;
		count++;
	}
	return (count);
}
