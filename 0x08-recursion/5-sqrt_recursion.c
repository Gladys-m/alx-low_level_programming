#include "main.h"

/**
 * _sqrt_recursion - find natural squareroot
 * @n: number
 *
 * Return: integer
 */
int _sqrt_recursion(int n)
{
	return (sqrt(n, 1));
}

/**
 * sqrt - find square root
 * @n: number to find square root
 * @val: square root
 *
 * Return: sqrt recursion
 */
int sqrt(int n, int val)
{
	if (val * val == n)
		return (val);
	else if (val * val < n)
		return (sqrt(n, val + 1));
	else
		return (-1);
}				
