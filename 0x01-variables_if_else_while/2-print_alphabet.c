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
char alp[] = "abcdefghijklmnopqrstuvwxyz";
for (int i = 0 ; i < 26 ; i++)
{
putchar(alp[i]);
}
return (0);
}
