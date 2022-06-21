#include "main.h"

/*
 * _strpbrk - searches a string for any of a set of bytes
 * @s: initial string
 * @accept: string that contains characters to be compares
 *
 * Return: a pointer to the initial string
 */
char *_strpbrk(char *s, char *accept)
{
	int i = 0;
	int j;
	char *p;

	while(s[i] != '\0')
	{
		j = 0;
		while(accept[j] != '\0')
		{
			if(accept[j] == s[i])
			{
				p = &s[i];
				return (p);
			}
			j++;
		}
		i++
	}
}
