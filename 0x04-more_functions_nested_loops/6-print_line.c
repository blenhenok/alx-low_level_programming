#include "main.h"
/**
 * print_line - Entry point
 * @n: A character printed
 * Return: no return
 */
void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
