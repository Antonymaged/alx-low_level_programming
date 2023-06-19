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
int num[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
int c = 0;
while (c < 10)
{
putchar(num[c] + '0');
putchar(' ');
putchar(',');
c++;
}
return (0);
}
