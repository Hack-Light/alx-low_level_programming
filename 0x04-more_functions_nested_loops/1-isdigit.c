#include "main.h"

/**
 *  *  _isdigit - Entry point
 *   *  Description:'the program's description'
 *    * @c: The character to be checked.
 *     * Return: The result of the addition.
*/

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
