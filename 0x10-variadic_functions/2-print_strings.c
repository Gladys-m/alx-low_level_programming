#include "variadic_functions.h"

/**
 * print_strings - prints strings
 * @separator: string printed between strings
 * @n: number of strings passed
 *
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	char *string;
	unsigned int i;

	va_start(args, n);
	for(i = 0; i < n; i++)
	{
		string = va_arg(args, char*);
		if(string == NULL)
			printf("(nil)");
		else
			printf("%s", string);
		if(i < n-1)
		{
			if(separator == NULL)
				continue;
			else
				printf("%s", separator);
		}
	}
	va_end(args);
	printf("\n");
}
