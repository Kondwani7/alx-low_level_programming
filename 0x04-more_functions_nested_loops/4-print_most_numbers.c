#include "main.h"
/**
 * print_most_numbers - print numbers 0 to 9, except 2 and 4
 * Return: Always 0 for success
 */
void print_most_numbers(void)
{
	int i;

	i = 0;
	for (i = 0; i < 10; i++)
	{
		if ((i != 2) && (i != 4))
		{
			_putchar(i + '0');
		}
		_putchar('\n');
	}
}
