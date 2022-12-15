#include "main.h"

/**
 * _isdigit - check if c is a digit
 * @c: number to be checked
 *
 * Return: 0 or 1
 *
 */
int _isdigit(int c)
{
	if (c >= '1' && c <= 9)
		return (1);
	else
		return (0);
}
