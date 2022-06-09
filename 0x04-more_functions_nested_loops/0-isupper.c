#include "main.h"
/**
 * _isupper - checks if a letter is uppercase or lower case
 * @c: the variable
 * Return: Always 0 for success
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
