#include <stdio.h>
/**
 * main - Prints different combinations of two digits
 * Return: (0) upon successful output
 */

int main(void)
{
	int i = 0;
	int j = 0;

	for (i = 0; i < 10 ; i++)
	{
		for (j = 0; j < 10; j++)
		{
			printf("%d, %d", i, j);
		}
	}
	return (0);
}
