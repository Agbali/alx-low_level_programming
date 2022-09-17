#include <stdio.h>
#include "main.h"

/**
 * _isdigit - check for a digit
 * @c : character to check
 * Return: 1 if c is a digit and 0 if otherwise
 */
int _isdigit(int c)
{
	return (c >= 48 && c <= 57);

}
