#include "main.h"

/**
 * _sqrt_recursion - find natural squareroot
 * @n: number
 *
 * Return: integer
 */
int _sqrt_recursion(int n)
{
	return (square(n, 1));
}

/**
 * square - find square root
 * @n: number to find square root
 * @val: square root
 *
 * Return: square recursion
 */
int square(int n, int val)
{
	if (val * val == n)
		return (val);
	else if (val * val < n)
		return (square(n, val + 1));
	else
		return (-1);
}				
