#include "main.h"
/**
 * _islower - find a lower case letter
 * @c: contains value we will compare
 * Return: Alwayys 0 for success
 */
int _islower(int c)
{
	if (c > 'a' && c < 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
