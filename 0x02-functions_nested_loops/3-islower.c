#include "main.h"
#include <stdio.h>
/**
 * _islower - did i mention that i hate betty
 */
int _islower(int c)
{
if (c >= 'a' && c <= 'z')
return (1);
else
return (0);
}
