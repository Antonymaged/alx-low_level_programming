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
char alp1[] = "abcdefghijklmnopqrstuvwxyz";
char alp2[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
while (c < 26)
{
putchar(alp1[c]);
c++;
}
c = 0;
while (c < 26)
{
putchar(alp2[c]);
c++;
}
putchar ('\n');
return (0);
}
