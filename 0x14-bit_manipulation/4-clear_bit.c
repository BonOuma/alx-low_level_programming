#include "main.h"
/**
 *a function that sets the value of a bit to 0 at a given index.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
unsigned int age;
if (index > 63)
return (-1);
age = 1 << index;
if (*n & age)
*n ^= age;
return (1);
}
