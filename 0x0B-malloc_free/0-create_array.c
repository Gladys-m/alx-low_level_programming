#include "main.h"
#include <stlib.h>

/**
 * create_array - creates an array of chars
 * @size: size of array
 * @c: char to be put in array
 *
 * Return: pointer to array or NULL if fails
 */
char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int i;

	if(size == 0)
	{
		return NULL;
	}
	
	ptr = malloc(size * sizeof(char));

	if(ptr == 0)
	{
		return NULL;
	}
	else
	{
		for(i = 0; i < size; i++)
		{
			*(ptr + i) = c;
		}
	}
	return (ptr);
}
