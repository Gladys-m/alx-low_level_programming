#include <stdio.h>
/**
 * main - Prints different combinations of two digits
 * return: 0 upon success
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
