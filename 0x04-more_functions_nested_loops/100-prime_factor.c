#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0
 */
int main(void)
{
	long n = 612852475143;
	int i;

	while (i++ < n / 2)
	{
		if (n % i == 0)
		{
			n /= 2;
			continue;
		}
		for (i = 3; i < n / 2; i += 2)
		{
			if (n % i == 0)
				n /= i;
		}
	}
	printf("%ld\n", n);
	return (0);
}
