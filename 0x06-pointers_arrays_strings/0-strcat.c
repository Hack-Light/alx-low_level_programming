/**
 * _strcat - A function that concatenates two strings
 * @dest: the string toe be appended to
 * @src: the string that is appended
 * Return: the pointer of the concatenated string
*/
char *_strcat(char *dest, char *src)
{
	int index, num;

	for (index = 0; dest[index] != '\0'; index++)
		;
	for (num = 0; src[num] != '\0'; num++)
	{
		dest[index] = src[num];
		index++;
	}
	return (dest);
}
