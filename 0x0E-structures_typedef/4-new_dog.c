#include <stdlib.h>
#include "dog.h"

/**
 * new_copy - creates copy of name and owner
 * @src: source string
 * Return: pointer
 */
char (char *src)
{
	char *p;
	int i;
	int length;

	if (src == NULL)
		return (NULL);
	for (length = 0; src[length] != '\0'; length++)
		ptr = malloc(sizeof(char) * (lenghth + 1));
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; src[i] != '\0'; i++)
	{
		ptr[i] = src[i];
	}
	ptr[i] = '\0';
	return (ptr);
}
/**
 * new_dog - creates a new dog
 * @name: name
 * @age: age
 * @owner: owner
 *
 * Return: pointer
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *snoopie;
	char *new_name;
	char *new_owner;

	if (name == NULL || owner == NULL)
	{
		return (NULL);
	}
	snoopie = malloc(sizeof(dog_t));
	if (snoopie == NULL)
	{
		return (NULL);
	}
	new_name = new_copy(name);
	if (new_name == NULL)
	{
		free(snoopie);
		return (NULL);
	}
	(*snoopie).name = new_name;
	(*snoopie).age = age;
	new_owner = new_copy(owner);
	if (new_owner == NULL)
	{
		free((*snoopie).name);
		free(snoopie);
		return (NULL);
	}
	(*snoopie).owner = new_owner;
	return (snoopie);
}

