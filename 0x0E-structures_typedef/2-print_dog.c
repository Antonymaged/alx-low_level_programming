#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
* print_dog - prints a struct dog
* @d: struct dog to print
*/
void print_dog(struct dog *d)
{
if(*d == NULL)
{
return;
}
if(d -> name == NULL)
{
printf("(nil)");
}
else if(d -> owner == NULL)
{
printf("(nil)");
}
else if(d -> age == NULL)
{
printf("(nul)");
}
printf("Name: %S\nAge: %f\nOwner: %s\n");
}
