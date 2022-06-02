#include <stdio.h>

/**
 * main - Entry Point
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	char x_char;
	int x_int;
	long x_long;
	long long x_longlong;
	float x_float;

	printf("Size of a char: %lu bytes(s)\n", sizeof(x_char));
	printf("size of an int: %lu bytes(s)\n", sizeof(x_int));
	printf("Size of a long int: %lu bytes(s)\n", sizeof(x_long));
	printf("Size of a long long int: %lu bytes(s)\n", sizeof(x_longlong));
	printf("Size of a float: %lu byte(s)\n", sizeof(x_float));

	return (0);
}
