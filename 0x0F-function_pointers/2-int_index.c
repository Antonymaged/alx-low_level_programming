#include "function_pointers.h"

/**
 * int_index - function to search for a number
 * @array: the array we will search in
 * @size: is the size of the array
 * @cmp: the function that will compare
 * Return: 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
if (array == NULL  || size <= 0 || cmp == NULL)
{
return (-1);
}
else
{
int i;
for (i = 0; i < size; i++)
{
if (cmp(array[i]))
{
return (i);
}
}
return (-1);
}
}
