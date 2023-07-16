#include "main.h"

/**
 * main - is the function to print number of arguments
 * @argc: number of arguments
 * @argv: value of arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char **argv __attribute__((unused)))
{
argc = argc - 1;
printf("%d\n", argc);
return (0);
}
