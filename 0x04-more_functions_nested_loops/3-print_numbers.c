#include "main.h"

/**
 * print_numbers - print numbers from 0 to 9
 *
 * Return: Always return success
 */
void print_numbers(void)
{
	int i = '0';

	for (i <= '9'; i++)
		
		_putchar((i % 10) + '0');

	_putchar('\n');
}
