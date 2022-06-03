#include <stdio.h>
/**
 * main - Prints lowercase alphabets in reverse
 * Return:(0) after next line
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
