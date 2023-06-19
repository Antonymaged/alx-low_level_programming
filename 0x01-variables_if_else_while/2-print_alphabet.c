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
char alp[] = "abcdefghijklmnopqrstuvwxyz";
while (c < 26)
{
putchar(alp[c]);
c++;
}
return (0);
}
