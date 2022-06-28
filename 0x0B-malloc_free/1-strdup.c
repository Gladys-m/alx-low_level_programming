#include "main.h"

/**
 * _strlen - Finds length of string
 * @s: string to find length
 *
 * Return: counter
 */
int _strlen(char *s)
{
	unsigned int i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
/**
 * _strdup - Returns pointer to new memory
 * @str: actual string to copy
 *
 * Return: pointer to new string
 */
char *_strdup(char *str)
{
	char *s;
	int i;
	int len;
	int size;

	len = _strlen(str);
	size = len + 1;
	s = malloc(size * sizeof(char));
	if s == 0
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i < len; i++)
		{
			s[i] = str[i];
		}
		s[i] = '\0';
		return (s);
	}
}
