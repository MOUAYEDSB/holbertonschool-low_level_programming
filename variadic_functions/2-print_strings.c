#include "variadic_functions.h"
#include "stdio.h"
#include "stdlib.h"
#include "stdarg.h"

/**
 *print_strings - printing a string argument
 *@separator: a pointer
 *@n: an unsigned integer
 *
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i = 0;
	char *s;

	va_start(args, n);
	while (i < n)
	{
		s = va_arg(args, char *);
		if (s == NULL)
			printf("(nil)");
		else
			printf("%s", s);
		if (separator != NULL && i != n - 1)
			printf("%s", separator);
		i++;
	}
	printf("\n");
	va_end(args);
}
