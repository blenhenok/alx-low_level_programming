#include "main.h"
/**
 * *_strcpy - Entry point
 * @dest: pointer
 * @src: string
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int j = 0, i;

	while (src[j] != '\0')
	{
		j++;
	}
	for (i = 0; i < j; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}
