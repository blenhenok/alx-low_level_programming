#include "main.h"
/**
 * _strstr - Entry point
 * @haystack: entry string
 * @needle: substring
 * Return: pointer to substring
 */
char *_strstr(char *haystack, char *needle)
{
	char *bhaystack, *pneedle;

	while (*haystack != '\0')
	{
		bhaystack = haystack;
		pneedle = needle;
		while (*haystack != '\0' && *pneedle != '\0' && *haystack == *pneedle)
		{
			haystack++;
			pneedle++;
		}
		if (!*pneedle)
			return (bhaystack);
		haystack = bhaystack + 1;
	}
	return (0);
}
