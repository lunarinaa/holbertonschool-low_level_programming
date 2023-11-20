#include "function_pointers.h"
/**
 * print_name - function to print name
 * @name: to be frinted
 * @f: pointer to a function
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}

