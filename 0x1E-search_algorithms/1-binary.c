#include "search_algos.h"

/**
 * binary_search - performs a binary search
 * @array: pointer to array
 * @size: size of array
 * @value: value to be found
 *
 * Return: index of value else -1
 */

int binary_search(int *array, size_t size, int value)
{
	size_t start = 0;
	size_t end = size - 1;

	if (array == NULL)
		return (-1);

	while (start <= end)
	{
		size_t mid = (start + end) / 2;
		size_t i;

		printf("Searching in array: ");
		for (i = start; i <= end; i++)
		{
			if (i == end)
				printf("%d", array[i]);
			else
			{
				printf("%d, ", array[i]);
			}
		}
		printf("\n");

		if (array[mid] == value)
			return (mid);

		else if (array[mid] < value)
			start = mid + 1;

		else
		{
			end = mid - 1;
		}
	}
	return (-1);
}
