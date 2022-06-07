#include "main.h"
/**
 * print_alphabet_x10 - print alphabet times 10
 *
 * Return: Always 0 for success
 */
void print_alphabet_x10(void);
{
	char alphabet;
	int count;

	while (count < 10)
	{
		for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
		{
			_putchar(alphabet);
		}
		count++;
		_putchar('\n');
	}
}
