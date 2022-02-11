#include "main.h"

/**
 * isupper - Checks for uppercase char
 * c: is the char to be checked
 *
 * Return 1 is upper and 0 if not
 *
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
