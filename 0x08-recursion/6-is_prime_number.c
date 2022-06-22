#include "main.h"
/**
 * eval_num - our recursion func
 * @num: integer
 * @iter: number to iterate
 * Return: return 1 or 0
 */
int eval_num(int num, int iter)
{
	if (iter == num - 1)
	{
		return (1);
	}
	else if (num % iter == 0)
	{
		return (0);
	}
	else if (num % iter != 0)
	{
		return (eval_num(num, iter + 1));
	}
	else
	{
		return (0);
	}
}

/**
 * is_prime_number - evaluate if a integer is a prime number or not
 * @n: integer
 * Return: the prime number if valid
 */
int is_prime_number(int n)
{
	int iter;

	iter = 2;

	if (n < 2)
	{
		return (0);
	}
	else if (n == 2)
	{
		return (1);
	}
	else
	{
		return (eval_num(n, iter));
	}
}
