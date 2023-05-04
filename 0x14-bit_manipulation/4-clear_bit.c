#include "main.h"
/**
 *2023 ALX class Task project
 * clear_bit - Entry Point
 * @n: input
 * @index: index
 * Return: 0
 */
	int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = *n & ~(1ul << index);
	return (1);
}
