#include "main.h"
/**
 * _isupper - 0 checks if a letter is uppercase or lower case
 * @c: print int
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
