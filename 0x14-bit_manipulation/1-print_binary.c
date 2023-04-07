#include "main.h"
/**
 * the function  prints the binary of a decimal number
 * any  number shall be printed into  binary
 */
void print_binary(unsigned long int n)
{
int sum = 0;
int amount  = 0;
unsigned long int tax;
for (sum = 63; sum >= 0; sum--)
{
tax = n >> sum;
if (tax & 1)
{
_putchar('1');
amount++;
}
else if (amount)
_putchar('0');
}
if (!amount)
_putchar('0');
}
