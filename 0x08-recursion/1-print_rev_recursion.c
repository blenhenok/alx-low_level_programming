#include "main.h"
/**
 * _print_rev_recursion - Entry point
 * @s: string
 * Retutn: no return
 */
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
