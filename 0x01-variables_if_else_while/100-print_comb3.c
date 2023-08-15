#include <stdio.h>
/**
	*main - Entry point
	*
	*Return: Always (0)
	*/
int main(void)
{
	int a;

	int b;

	for (a = 0 ; a < 10 ; ++a)
	{
		for (b = 1 + a ; b < 10 ; ++b)
		{
			if (a != b)
			{
				putchar('0' + a);
				putchar('0' + b);
				if (a != 8 || b != 9)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
