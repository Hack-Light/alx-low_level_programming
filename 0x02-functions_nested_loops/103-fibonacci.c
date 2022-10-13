#include <stdio.h>

/**
 *  *  main - Entry point
 *   *  Description:'the program's description'
 *    * Return: The result of the addition.
*/

int main(void)
{
	unsigned long i = 0;
	unsigned long prev1 = 0;
	unsigned long prev2 = 1;
	unsigned long current = 0;
	unsigned long sum = 0;

	while (i < 4000000)
	{
		current = prev1 + prev2;
		prev1 = prev2;
		prev2 = current;
		i++;

		if (current % 2 == 0)
		{
			sum += current;
		}
	}

	printf("%lu", sum);
	printf("\n");
	return (0);
}
