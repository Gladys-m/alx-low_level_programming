#include <stdio.h>
/**
 * main - Prints base 16 numbers
 * Return: 0 upon success
 */

int main(void)
{
	int num;

	while(num < 0x10)
	{
		printf("%x",num);
		num++;
	}
	return (0);
}
