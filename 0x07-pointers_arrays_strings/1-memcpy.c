#include "main.h"
/**
 * _memcpy - Entry point
 * @dest: destination memory
 * @src: source memory
 * @n: bytes filled
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		*(dest + 1) = *(src + 1);
	return (dest);
}
