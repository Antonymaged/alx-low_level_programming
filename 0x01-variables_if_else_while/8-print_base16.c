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
char hexanum[] = "0123456789abcdef";
while (c < 16)
{
putchar(hexanum[c]);
c++;
}
putchar('\n');
return (0);
}
