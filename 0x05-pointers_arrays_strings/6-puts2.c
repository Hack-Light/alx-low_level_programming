#include "main.h"

/**
 * puts2 - A function that prints every other character of a
 * String with the first character
 * @str: the string to be printed
 *
 * Return: void
 */
void puts2(char *str)
{
	int num;

	num = 0;

	while (*(str + num) != '\0')
	{
		_putchar(*(str + num));
		num += 2;
	}
	_putchar('\n');
}
