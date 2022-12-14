#include<stdio.h>

/**
 *  main - Entry point
 *  Description:'the program's description'
 *  Return: Always 0 (Success)
*/


int main(void)
{
	int intType;
	float floatType;
	char charType;
	long int longInt;
	long long int long2Int;

	/* sizeof evaluates the size of a variable*/
	printf("Size of a char: %zu byte(s)\n", sizeof(charType));
	printf("Size of an int: %zu byte(s)\n", sizeof(intType));
	printf("Size of a long int: %zu byte(s)\n", sizeof(longInt));
	printf("Size of a long long int: %zu byte(s)\n", sizeof(long2Int));
	printf("Size of a float: %zu byte(s)\n", sizeof(floatType));
	return (0);
}
