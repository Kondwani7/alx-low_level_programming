#include "main.h"
/**
 * print_sign - return checks if a number is postive 0 or negative
 * @n: used to check a number sign
 * Return: Always 0 for success
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar ('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar ('0');
		return (0);
	}
	else
	{
		_putchar ('-');
		return (-1);
	}
}
