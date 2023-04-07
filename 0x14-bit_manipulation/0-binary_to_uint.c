#include "main.h"
/**
 * binary_to_uint - converts a binary number to an unsigned int.
 * @b: A pointer to a string of 0 and 1 chars.
 * Return: If b is NULL or contains chars not 0 or 1 - 0.
 *  Otherwise - the converted number.
 */
unsigned int binary_to_uint(const char *b)
{
unsigned int temp = 0;
int y = 0;
if (b[y] == '\0')
return (0);
while ((b[y] == '0') || (b[y] == '1'))
{
temp<<= 1;
temp += b[y] - '0';
y++;
}
return (temp);
}
