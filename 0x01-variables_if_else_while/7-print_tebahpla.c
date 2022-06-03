#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 for success
 */
int main(void)
{
	char z = 'z';

	for (z = 'z'; z >= 'a'; z--)
	{
		putchar(z);
	}
	putchar('\n');

	return (0);
}
