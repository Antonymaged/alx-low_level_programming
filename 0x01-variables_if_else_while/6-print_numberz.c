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
char n[] = "0123456789";
while (c < 10)
{
putchar(n[c]);
c++;
}
putchar('\n');
return (0);
}
