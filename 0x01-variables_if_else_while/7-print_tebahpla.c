#include <stdio.h>
/**
 * main - Prints lowercase alphabets in reverse
 * 
 * Return : Always 0 (success)
 */

int main(void)
{
	char alpha = 'z';

	while (alpha >= 'a')
	{
		putchar(alpha);
		alpha--;
	}
	putchar('\n');
	return (0);
}
