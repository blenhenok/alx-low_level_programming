#include<stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
	char letter;

	for (letter = 'a, A'; letter <= 'z, Z'; letter++)
		putchar(letter);
	putchar('\n');
	return (0);
}
