#include "main.h"

/**
 *  *  print_numbers - Entry point
 *   *  Description:'the program's description'
*/

void print_numbers(void)
{
	int num;

	num = 0;
	while (num <= 9)
	{
		_putchar(num + '0');
		num++;
	}
	_putchar('\n');
}
