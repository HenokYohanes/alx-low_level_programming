#include "main.h"
#include <string.h>

/**
 * _strstr - locates a substring
 * @haystack: string
 * @needle: substring
 * Return: Returns a pointer to the beginning of the located substring
 */

char *_strstr(char *haystack, char *needle)
{
	int needle_len;

	needle_len = strlen(needle);

	while (*haystack != '\0')
	{
		if (strncmp(haystack, needle, needle_len) == 0)
		{
			return (haystack);
		}
		haystack++;
	}

	return ('\0');
}
