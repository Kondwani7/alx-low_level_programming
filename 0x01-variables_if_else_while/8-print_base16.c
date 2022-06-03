#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 for success
 */
int main(void)
{
	char x = '0';
	char y = 'a';

	for (x = '0'; x <= '9'; x++)
	{
		putchar(x);
	}
	for (y = 'a'; y <= 'f'; x++)
	{
		putchar(y);
	}
	putchar('\n');

	return (0);
}
