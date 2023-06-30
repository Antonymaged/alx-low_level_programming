#include "main.h"
#include <stdio.h>

void print_alphabet(void)
{
char a = 'a';
while(a <= 'z')
{
putchar(a);
a++;
}
putchar('\n');
}

#include "main.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
print_alphabet();
return (0);
}
