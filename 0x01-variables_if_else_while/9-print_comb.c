#include <stdio.h>
/**
 * main - Prints single digit combinations
 * Return: 0 upon success
 */

int main(void)
{
	int i = 0;

	for (i = 0 ; i < 10 ; i++)
	{
		if (i == 9)
			printf("%d", i);
		else
			printf("%d, ", i);
	}
	return (0);
}
