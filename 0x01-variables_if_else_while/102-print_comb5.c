#include <stdio.h>
/**
	*main - Entry point
	*
	*Return: Always 0 (Success)
	*/
int main(void)
{
	int a;

	int b;

	for (a = 0 ; a <= 98 ; ++a)
	{
		for (b = a ; b <= 99 ; ++b)
		{
			putchar('0' + a);
			putchar(' ');
			putchar('0' + b);
			if (a != 98 || b != 99)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
