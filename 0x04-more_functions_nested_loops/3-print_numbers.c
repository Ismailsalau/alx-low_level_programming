#include "main.h"

/**
 * print_numbers - print numbers from 0 to 9
 */
void print_numbers(void)
{
	int m;

	for (m >= '0'; m <= '9'; m++)

	{

	_putchar((m % 10) + '0');

	}

	_putchar('\n');
}
