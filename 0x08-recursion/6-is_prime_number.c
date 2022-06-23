#include "main.h"

/**
 * find_prime - determines prime number
 * @n: first number
 * @val: second number
 *
 * Return: find_prime
 */
int find_prime(int n, int val)
{
	if (n <= 1 || (n != val && n % val == 0))
	{
		return (0);
	}
	else if (n == val)
	{
		return (1);
	}
	return (find_prime(n, val + 1));
}
/**
 * is_prime_number - returns true or false if prime
 * @n: number to check
 *
 * Return: 1 if prime otherwise 0
 */			
int is_prime_number(int n);
{
	return (find_prime(n, 2));
}			
