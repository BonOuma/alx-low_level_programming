#include "main.h"
/**
 * Setting the value a bit at any given index to 1.
 * where index is the index, starting from 0 of the bit you want to set
 * 
 */
int set_bit(unsigned long int *n, unsigned int index)
{
if (index >= (sizeof(unsigned long int) * 8))
return (-1);
*n ^= (1 << index);
return (1);
}
