#include "main.h"
/**
 * _memset - Entry point
 * @s: memory area
 * @b: byte
 * @n: bytes filled
 * Return: pointer to dest
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		*(s + i) = b;
	return (s);
}
