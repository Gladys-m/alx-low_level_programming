#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - free memory allocated
 * @d: pointer
 * Description: free struct memory from heap
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d-owner);
		free(d);
	}
}
