#include "main.h"

/**
 * isdigit - checks for a digit (0 through 9)
 *
 * If is a digit return 1
 * If its not return 0
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
