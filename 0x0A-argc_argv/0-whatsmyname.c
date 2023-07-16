#include <stdio.h>
#include "main.h"
/**
 * main - is the main function to print the program name
 * @argc: is the count of the argument
 * @argv: is value of the arguments
 *
 * Return: Always 0 (Success)
 */

int main(int argc __attribute__((unused)), char *argv[])
{
printf("%s\n", *argv);
return (0);
}
