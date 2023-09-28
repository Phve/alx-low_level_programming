#include "main.h"

/**
 * print_binary - Prints the binary representation of a decimal number.
 * @n: The decimal number to print in binary.
 */
void print_binary(unsigned long int n)
{
	int i, count = 0;
	unsigned long int current;

	for (i = 63; i >= 0; i--)
	{
		/*
		 * Right-shift the number 'n' by 'i'
		 * significant bit to determine if it's 1 or 0.
		 */
		current = n >> i;

		if (current & 1)
		{
			/* If the current bit is 1, print '1' and increment the count. */
			_putchar('1');
			count++;
		}
		else if (count)
		{
			/* If a significant bit (1) has been encountered before, print '0'. */
			_putchar('0');
		}
	}

	if (!count)
		_putchar('0');
}

