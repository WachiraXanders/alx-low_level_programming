#include <stdio.h>
/**
	*main - Enrty point
	*
	*Return: Always 0 (Success)
	*/
int main(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		putchar(letter);
		++letter;
	}
	letter = 'A';

	while (letter <= 'Z')
	{
		putchar(letter);
		++letter;
	}
	putchar('\n');
	return (0);
}
