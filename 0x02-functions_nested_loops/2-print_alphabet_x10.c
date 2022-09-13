#include "main.h"

/**
 *  *  print_alphabet_x10 - Entry point
 *   *  Description:'the program's description'
*/

void print_alphabet_x10(void)
{
	char c;
	int min = 0;
	int max = 9;

	for (min = min; min <= max; min++)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
		_putchar('\n');
	}
}
