#include "main.h"
/**
 * print_rev - Entry point
 * @s: the character
 * Return: no return
 */
void print_rev(char *s)
{
	int i = 0, j, len;

	while (s[i] != '\0')
	{
		i++;
	}
	len = i;

	for (j = len - i; j >= 0; j--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
