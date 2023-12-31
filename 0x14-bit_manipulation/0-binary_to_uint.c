#include "main.h"

/**
 * binary_to_uint - Converts a binary string to an unsigned integer.
 * @b: String containing the binary number (0s and 1s).
 *
 * Return: The converted unsigned integer or 0 if an error occurs.
 */
unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int dec_val = 0;

	if (!b)
		return (0);

	for (i = 0; b[i]; i++)
	{
		/* Check if the character is not a valid binary digit (0 or 1) */
		if (b[i] < '0' || b[i] > '1')
			return (0);

		/*
		 * Convert the binary string to decimal by multiplying the
		 * current value by 2 and adding the current binary digit.
		 */
		dec_val = 2 * dec_val + (b[i] - '0');
	}

	return (dec_val);
}
