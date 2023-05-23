#include "main.h"
/**
 * _isalpha - Entry point
 * @c: An input character
 * Return: 1 or 0
 */
int _isalpha(int c)
{
	char lower, upper;
	int j = 0;

	for (lower = 'a'; lower <= 'z'; lower++)
	{
		for (upper = 'A'; upper <= 'Z'; upper++)
		{
			if (c == lower || c == upper)
				j = 1;
		}
	}
	return (j);
}
