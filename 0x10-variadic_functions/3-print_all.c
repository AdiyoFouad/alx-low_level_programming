#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
* print_all - prints anything
* @format: list of types of arguments
*c: prints char
*i: prints integer
*s: prints string
*f: prints float
*/

void print_all(const char * const format, ...)
{
	va_list ap;
	int i = 0, c = 0;
	char *v;

	va_start(ap, format);
	while (format != NULL && format[i] != '\0')
	{
		c = 0;
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(ap, int));
				break;
			case 'i':
				printf("%d", va_arg(ap, int));
				break;
			case 'f':
				printf("%f", va_arg(ap, double));
				break;
			case 's':
				v = va_arg(ap, char*);
				if (v == NULL)
					v = "(nil)";
				printf("%s", v);
				break;
			default:
				c = 1;
				break;
		}
		if (c == 0 && format[i + 1] != '\0')
			printf(", ");
		i++;
	}
	va_end(ap);
	printf("\n");
}
