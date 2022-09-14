#include "main.h"
#include <stdio.h>

/**
 *  *  print_to_98 - Entry point
 *   *  Description:'the program's description'
 *    *  @n: The first integer to be added.
 *     *
 *      *
 *       * Return: The result of the addition.
*/

void print_to_98(int n)
{
	if (n >= 98)
	{
		while (n > 98)
			printf("%d, ", n--);
		printf("%d\n", n);
	}

	else
	{
		while (n < 98)
			printf("%d, ", n++);
		printf("%d\n", n);
	}
}

