#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: string to check
 *
 * Return: length of string
 */
int _strlen(char *s)
{
	int i = 0;

	while(s[i] != '\0')
	{
		i++;
	}

	return (i);
}

/**
 * _strstr - locates a substring
 * @haystack: first string to check
 * @needle: second string to check
 *
 * Return: pointer to the first string
 */
char *_strstr(char *haystack, char *needle)
{
	int i;
	int j;
	int len1;
	int len2;
	char *p;

	len1 = _strlen(haystack);
	len2 = _strlen(needle);

	for(i = 0; i < len1; i++)
	{
		for(j = 0;j < len2; j++)
		{
			if(needle[j] != haystack[i+j])
				break;
			else
				p = &haystack[i+j];
			return (p);
		}
	}
}
