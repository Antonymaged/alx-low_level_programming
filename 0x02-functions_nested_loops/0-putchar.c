#include <stdio.h>
#include "main.h"

void putcha (void)
{
char *a = "_putchar";
putchar(*a);
putchar('\n');
}

int main (void)
{
putcha();
return (0);
}
