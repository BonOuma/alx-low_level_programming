#include "main.h"
/**
 *function to covert binary number to unsigned int
 * The return of the function is a converted number
 */
unsigned int binary_to_uint(const char *b)
{
int y;
unsigned int age = 0;
if (!b)
return (0);
for (y = 0; b[y]; y++)
{
if(b[y]< '0' || b[y] > '1')
return (0);
age = 2 *age + (b[y] - '0');
}
return (age);
}
