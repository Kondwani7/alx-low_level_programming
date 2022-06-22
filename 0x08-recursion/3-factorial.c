#include "main.h"
/**
 * factorial - this function shall return the factorial of a given number
 * @n: the variable
 * Return: the factorial
 */
int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
