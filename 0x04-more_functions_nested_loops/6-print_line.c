#include "main.h"


/**
 *  *  print_line - Entry point
 *   * Description:'the program's description'
 *   * @n: the number of lines to be drawn
 *    * Return: The result of the addition.
*/


void print_line(int n)
{
	int i;

	if (n > 0)
	{
		while (i <= n)
		{
			_putchar('_');
			i++;
		}
	}

	_putchar('\n');
}
