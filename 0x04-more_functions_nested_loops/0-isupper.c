#include "main.h"
/**
 *_isupper - Entry point
 *@c: An input character
 *Return: 1 or 0
 */
int _isupper(int c);
{
	char letter;
	int j = 0;

	for (letter = 'A'; letter <= 'Z'; letter++)
	{
		if (letter == c)
			j == 1;
	}
	return (j);
}
