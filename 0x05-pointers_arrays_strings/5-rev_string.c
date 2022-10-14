#include "main.h"

/**
 * rev_string -  a fuction that reverses a string
 * @s: the string to be reversed
 *
 * Return: void
 */
void rev_string(char *s)
{
	int num;
	int len;
	int count;
	char c;

	count = 0;
	num = 0;
	while (*(s + count) != '\0')
	{
		count++;
	}
	len = count;
	while (num < len / 2)
	{
		c = s[num];
		s[num] = s[count - 1];
		s[count - 1] = c;
		num++;
		count--;
	}
}
