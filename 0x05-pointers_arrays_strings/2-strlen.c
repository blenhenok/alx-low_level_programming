#include "main.h"
#include <stdio.h>
/**
 * _strlen - Entry point
 * @s: the character
 * Return: length of string
 */
int _strlen(char *s)
{
	int c = 0;

	while (*(s + c) != '\0')
		c++;
	return (c);
}
