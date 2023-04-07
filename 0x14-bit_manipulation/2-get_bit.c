#include "main.h"
/**
 * a function that returns the value of a bit at a given index.
 * Return: the value of the bit.
 */
int get_bit(unsigned long int n, unsigned int index)
{
unsigned int age;
if (n == 0 && index < 64)
return (0);
for (age = 0; age <= 63; n >>= 1, age++)
{
if (index == age)
{
return (n & 1);
}
}
return (-1);
}
