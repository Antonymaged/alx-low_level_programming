#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * *_calloc - allocates memory for an array
 * @nmemb: number of elements in the array
 * @size: size of each element
 *
 * Return: pointer to allocated memory
 */


void *_calloc(unsigned int nmemb, unsigned int size)
{
int *p;
p = calloc(nmemb, size);
if (nmemb == 0 || size == 0)
{
return (NULL);
}
if (p == NULL)
return (NULL);
}
