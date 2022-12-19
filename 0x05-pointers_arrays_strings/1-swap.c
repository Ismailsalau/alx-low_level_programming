#include "main.h"

/**
 * swap_int - swaps the value of 2 integers
 * @x: first integer
 * @y: second integer
 */
void swap_int(int *a, int *b)
{
	int tmp = *a;
		*a = *b;
		*b = tmp;

}
