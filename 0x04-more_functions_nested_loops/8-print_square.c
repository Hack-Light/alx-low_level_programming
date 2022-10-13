#include "main.h"


/**
 *  *  print_square - Entry point
 *   * Description:'the program's description'
 *   * @size: the number of lines to be drawn
 *    * Return: The result of the addition.
*/


void print_square(int size)
{
	if (size > 0)
	{
		int col = 1;

		while (col <= size)
		{
			int row = 1;

			while (row <= size)
			{
				_putchar('#');
				row++;
			}
			col++;
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
