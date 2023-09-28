#include "main.h"

/**
 * clear_bit - Sets the value of a specified bit to 0.
 * @n: Pointer to the number to modify.
 * @index: The index of the bit to clear (0-based).
 *
 * Return: 1 if the operation was successful, -1 if it failed.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	/* Check if the provided index is within a valid range (0 to 63). */
	if (index > 63)
		return (-1);

	/* a complemented bit mask to clear the bit. */
	*n = (~(1UL << index) & *n);

	return (1); /* Return 1 to indicate success. */
}
