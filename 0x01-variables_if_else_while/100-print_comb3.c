#include <stdio.h>
/* more headers goes there */
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
/* betty style doc for function main goes there */
int main(void)
{
int c = 0;
int i = 0;
int num[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
while (c < 9)
{
if (c == 0)
i = 1;
else if (c == 1)
i = 2;
else if (c == 2)
i = 3;
else if (c == 3)
i = 4;
else if (c == 4)
i = 5;
else if (c == 5)
i = 6;
else if (c == 6)
i = 7;
else if (c == 7)
i = 8;
else
i = 9;
while (i < 10)
{
putchar(num[c] + '0');
putchar(num[i] + '0');
if (c == 8 && i == 9)
continue;
putchar(',');
putchar(' ');
i++;
}
c++;
}
return (0);
}
