#include<stdio.h>
/**
 * main - Prints two two digit numbers
 * Return: (0) after successful output
 */
int main(void)
{
	int i;
	int j;
	int k;
	int y;

	for (i = 48; i < 58; i++)
	{
		for (j = 48; j < 57; j++)
		{
			for (k = 48; k < 58; k++)
			{
				for (y = 49; y < 58; y++)
				{
					putchar(i);
					putchar(j);
					putchar(' ');
					putchar(k);
					putchar(y);
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	return (0);
}
