#include "main.h"

/**
 * main - the function to print all attributes
 * @argc: number of arguments
 * @argv: value of arguments
 * Return: Always 0 (Success)
 */
int main(int argc __attribute__((unused)), char *argv[])
{
int x;
for(x = 0; x < argc; x++)
{
printf("%s\n", argv[x]);
}
return (0);
}
