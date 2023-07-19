#include <stdlib.h>
#include "main.h"

char *_strdup(char *str)
{
if (str == NULL)
{
return NULL;
}
char *new_str = (char *) malloc(strlen(str) + 1);
if (new_str == NULL)
{
return NULL;
}
strcpy(new_str, str);
return new_str;
}
