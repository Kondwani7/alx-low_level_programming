#include "main.h"
/**
 * _isdigit - checks a digit from 0 to 9
 * @c: variable
 * Return: Always 0 for success
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
