#include "main.h"

/**
 * set_bit - Sets a bit at a given index to 1.
 * @n: Pointer to the number to modify.
 * @index: The index of the bit to set to 1 (0-based).
 *
 * Return: 1 if the operation was successful, -1 if it failed.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	/* Check if the provided index is within valid range (0 to 63). */
	if (index > 63)
		return (-1);

	/* Set the bit at the specified index to 1 using a bitwise OR operation. */
	*n = ((1UL << index) | *n);

	return (1); /* Return 1 to indicate success. */
}
