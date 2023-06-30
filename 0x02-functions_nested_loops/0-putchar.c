#include <stdio.h>
#include "main.h"

void _putchar (void)
{
char *a = "_putchar";
putchar(*a);
putchar('\n');
}

int main (void)
{
_putchar();
return (0);
}
