#include "main.h"
#include "_putchar.c"
#include "stdio.h"
/**
 *print_numbers - Prints the numbers.
 *
 *Return: Always 0 (Success).
 */
void print_numbers(void)
{
	int a;

	for (a = 0 ; a <= 9 ; a++)
	{
		putchar('0' + a);
	}
	putchar('\n');
}
