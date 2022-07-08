#include  <stdlib.h>
#include "function_pointers.h"
/**
 * print_name - prints a name
 * @name: char variable
 * @f: ponter for acessing the printing function
 */
void print_name(char *name, void (*f)(char *))
{
	if (!name || !if)
	{
		return;
	}
	f(name);
}
