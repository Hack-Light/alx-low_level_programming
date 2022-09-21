#include "main.h"

/**
 *  *  _isupper - Entry point
 *   *  Description:'the program's description'
 *    * @c: The character to be checked.
 *     * Return: The result of the addition.
*/

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
