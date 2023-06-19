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
while (i < 10)
{
if (i < 2)
continue;
else if (i < 3)
continue;
else if (i < 4)
continue;
else if (i < 5)
continue;
else if (i < 6)
continue;
else if (i < 7)
continue;
else if (i < 8)
continue;
else if (i < 8)
continue;
else
{
putchar(num[c] + '0');
putchar(num[i] + '0');
putchar(',');
putchar(' ');
}
i++;
}
c++;
}
return (0);
}
