#include <stdio.h>
/**
 * main - Prints base 16 numbers
 * Return: 0 upon success
 */

int main(void)
{
	char num[16] = {'00','01','02','03','04','05','06','07','08','09','0a','0b','0c','0d','0e','0f'};
	int i;
	int j;

	for(i = 0; i < 16; i++)
	{
		putchar(num[i]);
	}

	return (0);
}
