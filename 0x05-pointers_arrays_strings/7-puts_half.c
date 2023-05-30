#include "main.h"
/**
 * puts_half - Entry point
 * @str: the character
 */
void puts_half(char *str)
{
	int i, j = 0, n;

	while (str[j] != '\0')
	{
		j++;
	}
	if (j % 2 == 0)
	{
		for (i = j / 2; str[i] != '\0'; i++)
		{
			_putchar(str[i]);
		}
	}
	else if (j % 2)
	{
		for (n = (j - 1) / 2; n < j - 1; n++)
		{
			_putchar(str[n = 1]);
		}
	}
	_putchar('\n');
}
