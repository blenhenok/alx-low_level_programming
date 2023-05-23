#include "main.h"
/**
 * _islower - Entry point
 * @c: An input character
 * Return: 1 if is lowercase or 0 otherwise
 */
int _islower(int c)
{
	char letter;
	int j = 0;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		if (letter == c)
			j = 1;
	}
	return (j);
}
