#include <stdlib.h>
#include "function_pointers.h"
/**
 * int_index - searches for an integer in a array
 * @array: int pointer variable
 * @size: size of array
 * @cmp : pointer to function to check for integer in element if non null
 * Return: (-1) or value for success
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array & cmp)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
				return (i);
		}
	}

	return (-1);
}
