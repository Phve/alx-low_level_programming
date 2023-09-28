#include "main.h"
#include <unistd.h>
/**
 * _putchar - writes c to the standard output
 * @c: The printed character
 *
 * Return: On success 1.
 * On error, -1 is returned,errno is put appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
