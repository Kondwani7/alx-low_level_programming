#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: void
 */
int main(void)
{
	int x = 100;
	int i;

	i = 1;
	while (i <= x)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz ");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz ");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz ");
		}
		}
		else
		{
			printf("%d ", i);
		}
		i++;
	}
	printf("\n");
}
