#include <stdio.h>
/**
 * main - Print all the lowercase letters except q and e
 * Return: Returns 0
 */
	int main(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
	if (letter != 'e' && letter != 'q')
		{
		putchar(letter);
		}
	letter++;
	}
	putchar('\n');
	return (0);
}

