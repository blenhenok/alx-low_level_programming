#include "main.h"
/**
 * more_numbers - Entry point
 * Return: no return
 */
void more_numbers(void)
{
	int i, a;

	for (i = 0; i < 10; i++)
	{
		for (a = 0; a < 15; a++)
		{
			if (a >= 10)
				_putchar((a / 10) + 48);
			_putchar((a % 10) + 48);
		}
		_putchar('\n');
	}
}
