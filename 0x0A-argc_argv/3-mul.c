#include "main.h"

/**
 * main - the function to multiply 2 numbers
 * @argc: number of arguments
 * @argv: values of arguments
 *
 * Return: Always(0) (Success)
 */
int main(int argc, char *argv[])
{
if (argc < 3 || argc > 3)
{
printf("Error\n");
exit (1);
}
else
{
int x, y, z;
x = atoi(argv[1]);
y = atoi(argv[2]);
z = x *y;
printf("%d\n", z);
return (0);
}
}
