#include "main.h"
/**
 * _strlen_recursion - get length of string
 * @s: pointer for the string
 * Return: recursion
 */
int _strlen_recursion(char *s)
{
	if (!*s)
	{
		return (0);
	}
	else
	{
		return (1 + _strlen_recursion(++s));
	}
}
/**
 * p1 - our palindrome function
 * @s: the pointer to the string
 * @pos: the position
 * Return: a palindrome
 */
int p1(char *s, int pos)
{
	if (pos < 1)
	{
		return (1);
	}
	else if (*s == *(s + pos))
	{
		return (p1(s + 1, pos - 2));
	}
	else
	{
		return (0);
	}
}
/**
 * is_palindrome - final check if the entered string is a palindrome
 * @s: pointer of string
 * Return: 1 if true 0 if not
 */

int is_palindrome(char *s)
{
	int len = _strlen_recursion(s);

	return (p1(s, len - 1));
}
