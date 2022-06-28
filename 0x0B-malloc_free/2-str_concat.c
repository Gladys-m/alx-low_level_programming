#include "main.h"

/**
 * _strlen - Finds length of string
 * @s: string to check
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
 * str_concat - Concatenates two strings
 * @s1: destinstion string
 * @s2: source string
 *
 * Return: pointer to new memory string
 */
char *str_concat(char *s1, char *s2)
{
	char *s;
	int i;
	int len1;
	int len2;
	int size;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	len1 = _strlen(s1);
	len2 = _strlen(s2);
	size = len1 + len2 + 1;
	s = malloc(size * sizeof(char));
	if (s == 0)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i < len1; i++)
		{
			s[i] = s1[i];
		}
		for (i = 0; i < len2; i++)
		{
			s[len1 + i] = s2[i];
		}
		s[size - 1] = '\0';
		return (s);
	}
}
