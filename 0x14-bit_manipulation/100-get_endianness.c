#include "main.h"
/**
 * get_endianness - checks the endianness
 *
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
unsigned int age;
char *k;
age = 1;
k = (char *) & age;
return ((int)*k);
}
