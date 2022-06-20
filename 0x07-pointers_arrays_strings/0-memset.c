#include "main.h"

/**
 * _memset - Fills memory with a constant byte
 * @s: the address of memory to print
 * @b: the character to print
 * @n: the size of memory to print
 *
 * Return: pointer to s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for(i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
