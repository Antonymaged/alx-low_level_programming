#include "main.h"

/**
* _puts_recursion - does my stuff
* Description: desplayes a string.
* @s: the string which going to be displayied
*/

void _puts_recursion(char *s)
{
if (*s)
{
_putchar(*s);
_puts_recursion(*s + 1);
}
else
_putchar('\n');
}
