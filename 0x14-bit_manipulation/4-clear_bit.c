#include "main.h"
/**
 * clear_bit - clears a bit by setting it to 0
 * @n: number int
 * @index: index of bit
 *
 * Return 1 success, -1 failure
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}
