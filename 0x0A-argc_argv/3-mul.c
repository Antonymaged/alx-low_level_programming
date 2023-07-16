#include "main.h"

/**
 * main - the function to multiply 2 numbers
 * @argc: number of arguments
 * @argv: values of arguments
 * @x: value of the first num
 * @y: value of the second num
 * @z: value of the therd num
 *
 * Return: Always(0) (Success)
 */
int main(int argc, char *argv[])
{
int x, y, z;
x = atoi(argv[1]);
y = atoi(argv[2]);
z = x * y;
printf("%d\n", z);
return (0);
if (argc < 3 || argc > 3)
{
printf("Error\n");
return (1);
}
}
