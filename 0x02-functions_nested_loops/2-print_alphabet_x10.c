#include "main.h"
/**
 * print_alphabet_x10 - prints 10 times the alphabet in lowercase
 * Return: void
 */
void print_alphabet_x10(void)
{
	char letter = 'a';
	int i = 0;

	while (i < 10)
	{
	int j = 0;

	while (j < 26)
		{
		_putchar(letter);
		letter++;
		j++;
		}
		_putchar('\n');
		letter = 'a';
		i++;
	}
}

