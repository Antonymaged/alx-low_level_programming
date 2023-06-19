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
int c = 0, i = 0, n[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
while (c < 10)
{
putchar(n[c] + '0');
putchar(n[i] + '0');
putchar(' ');
i = (c == 0) ? 1 : (c == 1) ? 2 : (c == 2) ? 3
: (c == 3) ? 4 : (c == 4) ? 5 : (c == 5) ? 6 :
(c == 6) ? 7 : (c == 7) ? 8 : (c == 8) ? 9 : 9;
while (i < 10)
{
putchar(n[c] + '0');
putchar(n[i] + '0');
putchar(',');
putchar(' ');
i++;
}
c++;
}
return (0);
}
