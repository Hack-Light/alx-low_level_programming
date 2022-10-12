#include <stdio.h>

/**
 *  *  main - Entry point
 *   *  Description:'the program's description'
 *    * Return: The result of the addition.
*/

int main(void)
{

	int i = 0;
	unsigned long prev1 = 0;
	unsigned long prev2 = 1;
	unsigned long current;

	while (i < 50)
	{
		current = prev1 + prev2;
		prev1 = prev2;
		prev2 = current;
		i++;

		printf("%lu", current);

		if (i <= 49)
			printf(", ");
		else
			print("\n");
		
	}

	return (0);
}

