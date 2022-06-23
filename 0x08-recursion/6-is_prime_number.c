#include "main.h"

/**
 * find_prime - find prime number
 * @n: first number
 * @val: second number
 *
 * Return: gind_prime recursion
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
 * is_prime_number - gets result of prime number
 * @n: number to check
 *
 * Return: 1 if prime else 0
 */
int is_prime_number(int n)
{
	return (find_prime(n, 2));
}
