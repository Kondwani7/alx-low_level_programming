#include "main.h"
/**
 * more_numbers - prints 10 * numbers from 0 to 14
 * Return: 0
 */
void more_numbers(void)
{
	int i;
	int x;
	int y;
	int result;

	i = 0;
	result = 0;
	while (i < 10)
	{
		while (result <= 14)
		{
			if (result < 10)
			{
				y = result;
			}
			else
			{
				x = result / 10;
				y = result % 10;
				_putchar (x + '0');
			}
			_putchar (y + '0');

			result++;
		}
		i++;
		result = 0;
		_putchar ('\n');
	}
}
