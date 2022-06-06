#include <stdio.h>
/**
 * main - Prints different combinations of two digits
 * Return: (0) upon successful output
 */

int main(void)
{
	int i;
	int j;

	for (i = 48; i < 57 ; i++)
	{
		for (j = (i + 1); j < 58; j++)
		{
			putchar(i);
			putchar(j);
			if (j == 57 && i == 56)
				putchar(' ');
			else
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	return (0);
}
