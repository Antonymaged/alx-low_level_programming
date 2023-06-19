#include <stdio.h>
/* more headers goes there */
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
/* betty style doc for function main goes there **/
int main(void)
{
char alp[] = "zyxwvutsrqponmlkjihgfedcba";
int c = 0;
while (c < 26)
{
putchar(alp[c]);
c++;
}
putchar('\n');
}
