#include <stdio.h>
#include "main.h"

/**
 * putcha - i hate betty
 */
void putcha(void)
{
char *a = "_putchar";
putchar(*a);
putchar('\n');
}

/**
 * main - Entry point
 *
 * Description: This function serves as the entry point for the program.
 * It takes in command-line arguments executes the main logic of the program.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
putcha();
return (0);
}
