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
int v = 0;
int c = 0;
int i = 0;
int num[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
while (v < 8)
{
if (v == 0)
c = 1;
else if (v == 1)
c = 2;
else if (v == 2)
c = 3;
else if (v == 3)
c = 4;
else if (v == 4)
c = 5;
else if (v == 5)
c = 6;
else if (v == 6)
c = 7;
else if (v == 7)
c = 8;
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
break;
putchar(',');
putchar(' ');
i++;
}
c++;
}
}
putchar('\n');
return (0);
}
