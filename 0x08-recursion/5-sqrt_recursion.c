#include "main.h"

/**
 * _sqrt_recursion - find natural squareroot
 * @n: number
 *
 * Return: integer
 */
int _sqrt_recursion(int n)
{
	return (sqroot(n, 1));
}

/**
 * sqroot - find square root
 * @n: number to find square root
 * @val: square root
 *
 * Return: sqroot recursion
 */
int sqroot(int n, int val)
{
	if (val * val == n)
		return (val);
	else if (val * val < n)
		return (sqroot(n, val + 1));
	else
		return (-1);
}				
