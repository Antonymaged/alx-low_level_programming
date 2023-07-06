#include "main.h"

/**
* _puts_recursion - does my stuff
* Description: desplayes a string.
* @s: the string which going to be displayied
*/

void _puts_recursion(char *s)
{
if (*s == 0)
{
putchar('\n');
}
else
_puts_recursion(*s - 1);
}
