#include "main.h"

/**
 * clear_bit - find the vaule of a bit at a given index
 * @n: decimal number
 * @index: index starting from 0 of the bit you want tto get
 *
 * Return: value of a bit
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (n == NULL || (index > (sizeof(unsigned long int) * 8) - 1))
		return (-1);

	*n &= ~(1 << index);
	return (1);
}
