#include "main.h"
/**
 * _puts - Entry point
 * @str: the character
 * Return: pointer to string
 */
void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
