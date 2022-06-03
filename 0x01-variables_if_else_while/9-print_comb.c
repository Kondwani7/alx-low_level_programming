#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 for success
 */
int main(void)
{
	int x = '0';

	while (x <= '9')
	{
		putchar(x);
		if (x == '9')
		{
			putchar('\n');
			return (0);
		}
		else
		{
			putchar(',');
			putchar(' ');
			x++;
		}
	}

	return (0);
}
