#include <stdio.h>
/**
 * main - Prints single digit combinations
 * Return: 0 upon success
 */

int main(void)
{
	int num;

	for (num = 48; num < 58; num++)
	{
		putchar(num);

		if (num == 57)
			putchar(EOF);
		else
			putchar(',');
		putchar(' ');
	}
	return (0);
}
