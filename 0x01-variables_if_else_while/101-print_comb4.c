#include <stdio.h>
/**
 * main - Prints combination of three numbers
 * Return: (0) upon successful output
 */

int main(void)
{
	int i = 0;
	int j = 0;
	int k = 0;

	for (i = 0; i<10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			for (k = 0; k < 10; k++)
			{
				printf("%d%d ,%d", i, j, k);
			}
		}
	}
	return (0);
}
