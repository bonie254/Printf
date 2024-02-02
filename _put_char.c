#include "main.h"

/**
 * _put_char - writes the character c to the output
 * @c: The character to print
 *
 * Return: returns 1 upon success.
 * On error, -1 is returned, and erro is corrected.
 *
 */
int _put_char(char c)
{
	return (write(1, &c, 1));
}
