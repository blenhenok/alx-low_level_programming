#include<stdio.h>
/**
 * main - Entry point
 * Return: Alwaya 0 (Success)
 */
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		if (letter != 'e' && letter != 'q')
			putchar(letter);
	}
	return (0);
}
