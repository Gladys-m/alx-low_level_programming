#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: the string to be checked
 *
 * Return: counter
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
 * _strspn - gets the length of a prefix substring
 * @s: the initial string
 * @accept: the string to be compared to 
 *
 * Return: number of bytes if true
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i;
	unsigned int j;
	unsigned int initial_length;
	unsigned len1;
	unsigned len2;

	initial_length = 0;
	len1 = _strlen(s);
	len2 = _strlen(accept);

	for(i = 0; i < len1; i++)
	{
		for(j = 0; j < len2; j++)
		{
			if(accept[j] == s[i])
				break;
		}
		if(!(accept[j] == s[i]))
			break;
		else
			initial_length++;
	}

	return (initial_length);
}
