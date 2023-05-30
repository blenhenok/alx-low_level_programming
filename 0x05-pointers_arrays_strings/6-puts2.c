#include "main.h"
/**
 * puts2 - Entry point
 * @str: the character
 * Return: no return
 */
void puts2(char *str)
{
	int j = 0, i;

	while (str[j] != '\0')
	{
		j++;
	}
	for (i = 0; i < j; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
