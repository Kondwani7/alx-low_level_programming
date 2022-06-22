#include "main.h"
/**
 * _pow_recursion - returns a integer raised to the power of another integer
 * @x: variable 1
 * @y: variable 2
 * Return: the power recusion function
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
	{
		return (1);
	}
}
