#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: always zero for success
 */
int main(void)
{
	int first_comb;
	int second_comb;

	for (first_comb = 0; first_comb < 100; first_comb++)
	{
		for (second_comb = first_comb + 1; second_comb < 100; second_comb++)
		{
			putchar(first_comb / 10 + '0');
			putchar(second_comb % 10 + '0');

			putchar(' ');

			if (first_comb == 98 && second_comb == 99)
			{
				break;
			}
		}
	}
	putchar('\n');

	return (0);
}
