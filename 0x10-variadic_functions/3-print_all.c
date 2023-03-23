#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_all - prints anything
 * @format: list of types of arguments passed to the function
 */
void print_all(const char * const format, ...)
{
	int i = 0;
	char c;
	char *s;
	float f;
	va_list arg_list;

	va_start(arg_list, format);

	while (format && format[i])
	{
		switch (format[i])
		{
		case 'c':
		c = (char) va_arg(arg_list, int);
		printf("%c", c);
		break;
		case 'i':
		i = va_arg(arg_list, int);
		printf("%d", i);
		break;
		case 'f':
		f = (float) va_arg(arg_list, double);
		printf("%f", f);
		break;
		case 's':
		s = va_arg(arg_list, char *);
		if (s)
			printf("%s", s);
		else
			printf("(nil)");
		break;
		default:
		break;
		}
		if (format[i + 1])
		printf(", ");
		i++;
	}
	printf("\n");
	va_end(arg_list);
}
