#include "main.h"
#include <stdio.h>
/**
 * get_bit - Returns the value of a bit at an index in a decimal number
 * @n: number to be searched for
 * @index: index of the bit
 *
 * Return: value of the bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int d;

	if (index > 63)
		return (-1);

	d = (n >> index) & 1;

	return (d);
}
