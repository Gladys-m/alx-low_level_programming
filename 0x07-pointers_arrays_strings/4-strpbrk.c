#include "main.h"

/*
 * _strpbrk - searches string for a set of bytes
 * @s: initial string
 * @accept: string that contains characters to be compares
 *
 * Return: string
 */
char *_strpbrk(char *s, char *accept)
{
	int i = 0;
	int j;
	char *t;

	while(s[i] != '\0')
	{
		j = 0;
		while(accept[j] != '\0')
		{
			if(accept[j] == s[i])
			{
				p = &s[i];
				return (t);
			}
			j++;
		}
		i++
	}
}
