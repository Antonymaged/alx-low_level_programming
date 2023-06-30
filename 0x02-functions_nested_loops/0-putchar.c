#include <stdio.h>
#include "main.h"

void putchar (void)
{
char *a = "_putchar";
putchar(*a);
putchar('\n');
}

int main (void)
{
putchar();
return (0);
}
