#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - initializes a variable type struct dog
 * @d: pointer
 * @name: name initialized
 * @age: age initialized
 * @owner: owner initializedd
 */
void init_dog(struct *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;
	else
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
