#include "main.h"
/**
 * _strpbrk - Entry point
 * @s: string
 * @accept: second string
 * Return: pointer to byte
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		for (j = 0; *(accept + j) != '\0'; j++)
		{
			if (*(s + i) == (accept + j))
				return (s + i);
		}
	}
	return ('\0');
}
