#include "main.h"

/**
 * binary_to_uint - converts binary number to decimal
 * @b: binary string
 *
 * Return: converted number
 */
unsigned int binary_to_uint(const char *b)
{
	int len = 0;
	int i;
	int total = 0;
	int decval = 1;

	if (!b)
		return (0);

	while (b[len] != '\0')
	{
		len++;
	}

	for (i = (len - 1); i >= 0; i--)
	{
		if (b[i] == '1')
			total += decval;

		if (b[i] > '1')
			return 0;

		decval *= 2;
	}

	return (total);
}

