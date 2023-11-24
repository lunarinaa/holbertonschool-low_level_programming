#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_all - function to print anithyng
 * @format: list of types of arguments
 * Return: nothing
 */
void print_all(const char * const format, ...)
{
	va_list args;
	unsigned int i = 0;
	char *separator = "";
	char *str;

	va_start(args, format);

while (format != NULL && format[i] != '\0')
{
switch (format[i])
{
case 'c':
printf("%s%c", separator, va_arg(args, int));
break;
case 'i':
printf("%s%d", separator, va_arg(args, int));
break;
case 'f':
printf("%s%f", separator, (float) va_arg(args, double));
break;
case 's':
str = va_arg(args, char *);
if (str == NULL)
{
	printf("%s(nil)", separator);
}
else
{
printf("%s%s", separator, str);
}
break;
default:
break;
}
separator = ", ";
i++;
}

va_end(args);

printf("\n");
}
