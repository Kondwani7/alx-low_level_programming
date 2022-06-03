#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 for success
 */
int main(void)
{
	int x = '0';

	for (x = '0'; x <= '9'; x++)
	{
		putchar(x);
	}
	putchar('\n');
	return (0);
}
