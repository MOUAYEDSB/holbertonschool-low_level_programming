#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

typedef struct
{
	char letter;
	void (*func)(va_list);
} datatype;

/* function to print a char */
void print_char(va_list valist)
{
	printf("%c", va_arg(valist, int));
}

/* function to print an int */
void print_int(va_list valist)
{
	printf("%d", va_arg(valist, int));
}

/* function to print a float */
void print_float(va_list valist)
{
	printf("%f", va_arg(valist, double));
}

/* function to print a string */
void print_string(va_list valist)
{
	char *s;

	s = va_arg(valist, char *);

	if (s == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", s);
}

/* function to print varying input of ints, chars, floats, and strings */
void print_all(const char *const format, ...)
{
	char *separator = "\n";
	int i, j = 0;
	va_list valist;

	datatype choice[] = {
		{'c', print_char},
		{'i', print_int},
		{'f', print_float},
		{'s', print_string},
		{'\0', NULL}};

	if (format == NULL)
	{
		printf("\n");
		return;
	}

	va_start(valist, format);
	while (format[j] != '\0')
	{
		i = 0;
		while (choice[i].letter != '\0')
		{
			if (choice[i].letter == format[j])
			{
				printf("%s", separator);
				choice[i].func(valist);
				separator = ",\n ";
			}
			i++;
		}
		j++;
	}
	va_end(valist);
	printf("\n");
}
