#include <stdio.h>
/**
 * main - Prints base 16 numbers
 * Return: 0 upon success
 */

int main(void)
{
	char num[16] = {'0X00','0X01','0X02','0X03','0X04','0X05','0X06','0X07','0X08','0X09','0X0A','0X0B','0X0C','0X0D','0X0E','0X0F'};
	int i;
	int j;

	for(i = 0; i < 16; i++)
	{
		putchar(num[i]);
	}I
	return (0);
}
