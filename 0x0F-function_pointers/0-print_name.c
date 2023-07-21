#include "function_pointers.h"

/**
 * print_name - prints name using the name and a pointer to a function
 * @name: the name will be print
 * @f: the function will be used to print the name
 * Return: nothing
 */
void print_name(char *name, void (*f)(char *))
{
if (name == NULL || f == NULL)
{
return;
}
else
{
f(name);
}
}
