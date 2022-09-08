#include <stdio.h>
#include <string.h>

/**
 *  *main - Entry point
 *   *Description:'the program's description'
 *    *Return: Always 0 (Success)
*/

int main(void)
{
char str1[] = "and that piece of art is useful\" - ";
char str2[] = "Dora Korpar, 2015-10-19\n";

strcat(str1, str2);

fprintf(stderr, "%s", str1);
return (1);
}
