#include "main.h"

/**
 * _sqrt_recursion - find natural squareroot
 * @n: number
 *
 * Return: integer
 */
int _sqrt_recursion(int n)
{
	return (sqr_r(n, 1));
}

/**
 * sqr_r - find square root
 * @n: number to find square root
 * @val: square root
 *
 * Return: sqr_r recursion
 */
int sqr_r(int n, int val)
{
	if (val * val == n)
		return (val);
	else if (val * val < n)
		return (square(n, val + 1));
	else
		return (-1);
}				
