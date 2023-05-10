#include "search_algos.h"

/**
 * linear_search - performs a linear search
 * @array: pointer to array
 * @size: size of array
 * @value: value to be found
 *
 * Return: index of value else -1
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)

			return (i);
	}

	if (array[i] != value)

		return (-1);

	return (0);
}
