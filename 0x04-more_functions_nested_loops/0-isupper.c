#include <stdio.h>
#include "main.h"

/**
 * _isupper - checks to see if an alphabet is upper or lower case
 * @i: a character to be checked
 * Return: 1 if character is uppercase and 0 otherwise
 */
int _isupper(int i)
{
	return (i >= 'A' && i <= 'Z');
}
