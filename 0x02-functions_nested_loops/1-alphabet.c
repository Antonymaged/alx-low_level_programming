#include "main.h"
#include <stdi.h>

void print_alphabet(void)
{
char a = 'a';
while(a <= 'z')
{
putchar(a);
}
putchar('\n');
}
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    print_alphabet();
    return (0);
}
