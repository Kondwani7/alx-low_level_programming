#include "main.h"
/**
 * _isalpha - checks for a alphabetic character
 * @c: used to compare if a character is a alphabetic character
 * Return: Always 0 for success
 */
int _isalpha(int c)
{
	if ((c > 'a' && c < 'z') || (c > 'A' && < 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
