#include <unistd.h>
/**
 * main - Entry point
 * Return: Always 0
 */
int main(void)
{
	float n = 612852475143, i;

	for (i = 2; i <= n; i++)
	{
		if (n % i == 0)
		{
			n /= i;
			i--;
		}
	}
	printf("%d\n", i);
	return (0);
}
