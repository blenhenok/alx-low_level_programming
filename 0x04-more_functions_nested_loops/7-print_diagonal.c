#include "main.h"

/**
 * print_diagonal - Entry point
 * @n: the parameter
 * Return: no return
 */
void print_diagonal(int n)
{
	int i, j;

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < i; j++)
		{
		_putchar(' ');
		}
		_putchar('\');
		if (i == (n - 1))
		{
			continue;
		}
			_putchar('\n');
	}
	_putchar('\n');
}
