#include "main.h"

/**
 * _strlen - returns the length of a string
 * @*str: string to be returned
 *
 * Return: Always 0
 *
 */
int _strlen(char *str)
{
	size_t length = 0;

	while (*str++)
		length++;

	return (length);

}
