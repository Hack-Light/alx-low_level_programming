#include <stdio.h>

/**
 *  * main - Entry point
 *   * Description:'the program's description'
 *   * @void: the number of lines to be drawn
 *    * Return: The result of the addition.
*/

int main(void)
{
	int i = 1;

	while (i <= 100)
	{
		if (i % 15 == 0)
			printf("FizzBuzz");
		else if (i % 3 == 0)
			printf("Fizz");
		else if (i % 5 == 0)
			printf("Buzz");
		else
			printf("%d", i);
		if (i == 100)
			printf("\n");
		else
			printf(" ");
		i++;
	}
	return (0);
}
