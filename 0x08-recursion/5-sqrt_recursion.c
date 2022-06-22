#include "main.h"
/**
 * _sq_recursive - this functios gets the natural square root of a number
 * @n: integer
 * @i: integer
 * Return: the sqrt recursion function
 */
int _sq_recursive(int i, int n)
{
	if (n == 0 || n == 1)
	{
		return (n);
	}
	else if (i * i < n)
	{
		return (_sq_recursive(i + 1, n));
	}
	else if (i * i == n)
	{
		return (i);
	}
	else
	{
		return (-1);
	}
}

/**
 * _sqrt_recursion - check for the sqrt of a integer
 * @n: integer
 * Return: the natural square root
 */

int _sqrt_recursion(int n)
{
	int i = 0;

	if (i < 0)
	{
		return (-1);
	}
	else
	{
		return (_sq_recursive(i, n));
	}
}
