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
  int i, j, k;
  for (i = 0; i < 720; i++)
  {
    j = (i / 100) % 10;
    k = (i / 10) % 10;
    if (j < k && k < (i % 10))
    {
      putchar(j + '0');
      putchar(k + '0');
      putchar(i % 10 + '0');
      if (i < 719)
      {
        putchar(' ,');
      }
    }
  }
  putchar('\n');
  return (0);
}
