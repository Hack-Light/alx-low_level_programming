#include "main.h"


/**
 *  *  print_diagonal - Entry point
 *   * Description:'the program's description'
 *   * @n: the number of lines to be drawn
 *    * Return: The result of the addition.
*/

void print_diagonal(int n)
{
	if (n > 0)
	{
		int col = 1;

		while (col <= n)
		{
			int space = 1;

			while (space <= col)
			{
				if (space == col)
					_putchar('\\');
				else
					_putchar(' ');
				space++;
			}
			col++;
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
