#include "main.h"
#include <stdio.h>

/**
 * more_numbers - print more numbers
 */
void more_numbers(void)
{
int c = 0;
int i;
while (c < 10)
{
for (i = 0; i < 15; i++)
{
if (i >= 10)
putchar('1');
putchar (i % 10 + '0');
}
putchar('\n');
c++;
}
}
