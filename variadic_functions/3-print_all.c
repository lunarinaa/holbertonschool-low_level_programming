#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>

void print_char(va_list arg);
void print_int(va_list arg);
void print_float(va_list arg);
void print_string(va_list arg);
void print_all(const char * const format, ...);

/**
 * print_char - function to print (type)
 * @arg: list of passed arguments
 */
void print_char(va_list arg)
{
	char c;

	c = va_arg(arg, int);

	printf("%c", c);
}

/**
 * print_int - function to print (type)
 * @arg: list of passed arguments
 */
void print_int(va_list arg)
{
	int i;

	i = va_arg(arg, int);

	printf("%d", i);
}

/**
 * print_float - function to print (type)
 * @arg: list of passed arguments
 */

void print_float (va_list arg)
{
	float f;

	f = va_arg(arg, double);

	printf("%f", f);
}

/**
 * print_string - function to print (type)
 * @arg: list of passed arguments
 */
void print_string(va_list arg)
{
	char *str;

	str = va_arg(arg, char *);

	if (str == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", str);
}

/**
 * prit_all - function to print anything
 * @format: a string of chars arguments
 */
void print_all(const char * const format, ...)
{
	va_list args;

	int i = 0, j = 0;
	char *separator = "";

	print f[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_string}
	};

	va_start(args, format);

	while (format && (*(format + i)))
	{
		j = 0;
	while (j < 4 && (*(format + i) != *(f[j].symbol)))
		j++;
	if (j < 4)
	{
		printf("%s", separator);
		f[j].print(args);
		separator = ", ";
		}
		i++;
		}
printf("\n");

va_end(args);

}

