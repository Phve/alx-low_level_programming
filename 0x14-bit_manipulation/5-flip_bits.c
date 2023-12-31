#include "main.h"

/**
 * flip_bits - Counts the number of bits to change from one number to another.
 * @n: The first number.
 * @m: The second number.
 *
 * Return: The number of bits that need to be changed to transform 'n' to 'm'.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, count = 0;
	unsigned long int current;
	unsigned long int exclusive = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		/*
		 * Right-shift the 'exclusive' value by 'i'  check the least
		 * significant bit to determine if it's 1.
		 */
		current = exclusive >> i;
		if (current & 1)
			count++; /* Increase the count . */
	}

	return (count);
}

