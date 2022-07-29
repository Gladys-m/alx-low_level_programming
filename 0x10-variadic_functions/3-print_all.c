#include "variadic_functions.h"

/**
 * print_all - prints anything
 * @format: arguments passed to the function
 *
 * Return: void
 */

void print_all(const char * const format, ...)
{
	va_list args;
	unsigned int i, j;
	int v, x;
	double z;
	char * y;
	unsigned int len = strlen(format);
	const char t_arg[] = "cifs";

	va_start(args, format);
	for (i = 0; i < len; i++)
	{
		j = 0;
		while (t_arg[j])
		{
			if (format[i] == t_arg[j] && j)
			{
				printf(", ");
				break;
			}
			j++;
		}

		switch (format[i])
		{
			case 'c':
				v = va_arg(args, int);
				printf("%c", v);
				break;

			case 'i':
				x = va_arg(args, int);
				printf("%d", x);
				break;

			case 'f':
				z = va_arg(args, double);
				printf("%f", z);
				break;

			case 's':
				y = va_arg(args, char*);
				printf("%s", y);
				break;
		}
	}
	va_end(args);
}

