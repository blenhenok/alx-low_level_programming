#include<unistd.h>
#include "main.h"
/**
 * _putchar - Entry point
 * @c: Character to print
 * Return: Always 0 (Success)
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
