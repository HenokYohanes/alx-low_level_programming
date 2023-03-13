#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * str_concat - concatenates two strings
 * @s1: first string input
 * @s2: second string input
 * Return: concat of s1 and s2
 */

char *str_concat(char *s1, char *s2)
{
	char *result;
	int len1, len2, total_len;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	len1 = strlen(s1);
	len2 = strlen(s2);
	total_len = len1 + len2 + 1;

	result = malloc(total_len);

	if (result == NULL)
	{
		return (NULL);
	}

	strcpy(result, s1);
	strcpy(result + len1, s2);

	return (result);
}


