#include <stdio.h>
/**
 * main - prints all the numbers of base 16 in lowercase
 * Return:Returns 0
 */

int main(void)
{
	int num = 0;
	char n;

	while (num < 16)
	{
	if (num < 10)
		{
		n = num + '0';
		}
	else
		{
		n = num - 10 + 'a';
		}

	putchar(n);

	num++;
	}

	putchar('\n');
return (0);
}

