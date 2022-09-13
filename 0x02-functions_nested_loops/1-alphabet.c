#include "main.h"

/**
 *  *  main - Entry point
 *   *  Description:'the program's description'
 *    *  Return: Always 0 (Success)
*/

char c;

int print_alphabet(void)
{
	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
