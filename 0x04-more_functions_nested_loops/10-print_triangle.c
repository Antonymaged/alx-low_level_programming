#include "main.h"
#include <stdio.h>

/**
 * print_triangle - prints a triangle, followed by a new line
 * @size: size of the triangle
 */
void print_triangle(int size)
{
int i, j;
if (size <= 0)
{
putchar('\n');
}
else
{
for (i = 0; i < size; i++)
{
for (j = i; j < size; j++)
{
putchar(' ');
}
for (j = 0;j < i; j++)
{
putchar('#');
}
putchar('\n');
}
}
}
