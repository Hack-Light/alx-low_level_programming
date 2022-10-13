#include "main.h"

/**
 *  *  more_numbers - Entry point
 *   *  Description:'the program's description'
 *    * Return: The result of the addition.
*/


void more_numbers(void)
{
	int i = 0;

	while (i < 10)
	{
		int j = 0;

		while (j < 15)
		{
			_putchar(j);
			j++;
		}

		_putchar("\n");
		i++;
	}

	_putchar("\n");
}
