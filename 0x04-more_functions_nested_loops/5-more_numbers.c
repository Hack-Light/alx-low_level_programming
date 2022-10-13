#include "main.h"

/**
 *  *  more_numbers - Entry point
 *   *  Description:'the program's description'
 *    * Return: The result of the addition.
*/


void more_numbers(void)
{
	int i = 0;
	int j;

	while (i < 10)
	{
		j = 0;

		while (j <= 14)
		{
			int act, rem;

			rem = j % 10;
			act = j / 10;

			if (act > 0)
				_putchar(act + '0');
			_putchar(rem + '0');
			j++;
		}

		_putchar("\n");
		i++;
	}
}
