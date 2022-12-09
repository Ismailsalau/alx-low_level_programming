#include <stdio.h>
/**
 * main - print out sizes of data types in c
 * code by Ismail
 * Return: 0
*/
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float f;

	printf("Size of a char: 1 byte\n", (unsigned long)sizeof(a));
	printf("Size of an int: 4 bytes(S)\n", (unsigned long)sizeof(b));
	printf("Size of a long int 8 bytes(S)\n", (unsigned long)sizeof(c));
	printf("Size of a long long int: 8 byte(S)\n", (unsigned long)sizeof(d));
	printf("Size of a float: 4 byte(S)\n", (unsigned long)sizeof(f));
	return (0);

}
