#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <string.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * @str: string
 *
 * Return: return 0
 */

char *_strdup(char *str)
{
	char *new_str;
	int len;

	if (str == NULL)
	{
		return (NULL);
	}

	len = strlen(str);

	new_str = malloc((len + 1) * sizeof(char));

	if (new_str == NULL)
	{
		return (NULL);
	}

	strcpy(new_str, str);

	return (new_str);
}


