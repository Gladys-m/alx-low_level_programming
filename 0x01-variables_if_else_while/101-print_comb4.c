#include <stdio.h>
/**
 * main - Prints combination of three numbers
 * Return: (0) upon successful output
 */

int main(void)
{
	int i;
	int j;
	int k;

	for (i = 48; i < 56; i++)
	{
		for (j = (i + 1); j < 57; j++)
		{
			for (k = (j + 1); k < 58; k++)
			{
				putchar(i);
				putchar(j);
				putchar(k);
				putchar(',');
				putchar(' ');
			}
		}
	}
	return (0);
}
