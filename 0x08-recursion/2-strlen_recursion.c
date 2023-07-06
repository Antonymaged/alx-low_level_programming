#include "main.h"

/**
 * _strlen_recursion - Returns the length of a string.
 * @s: The string to be measured.
 *
 * Return: The length of the string.
 */

int _strlen_recursion(char *s)
{
if (*s)
{
int x = 0;
x++;
}
else
{
_strlen_recursion(s + 1);
}
}
