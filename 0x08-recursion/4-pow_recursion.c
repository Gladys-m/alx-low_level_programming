#include "main.h"

/**
 * _pow_recursion - returns the power of a number
 * @x: actual value
 * @y: power
 *
 * Return: value of x after pow
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y != 0)
	{
		return (x * _pow_recursion(x, y - 1));
	}
	else
		return (1);
}
