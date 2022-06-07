#include "main.h"
/**
 * print_alphabet - entry point: print the alphabet
 *
 * Return: Always 0 for success
 */
void print_alphabet(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		_putchar(alphabet);
	}
	_putchar('\n');

	return (0);
}
