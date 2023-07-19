#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/*
 * create_Array - creats array
 * @size: size of the array
 * @c: valus of the array
 */
char *create_array(unsigned int size, char c)
{
unsigned int i;
char *ptr;
ptr = malloc(sizeof(char) * size);
if (size == 0 || ptr == NULL)
{
return (NULL);
}
else
{
for (i = 0; i < size; i++)
{
ptr[i] = c;
}
}
return (ptr);
}
