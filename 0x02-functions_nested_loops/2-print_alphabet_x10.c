#include "main.h"
/**
	*print_alphabet_x10 - Will print the lower case characters of the alphabet.
	*/
void print_alphabet_x10(void)
{
	char letter = 'a';
	int rep = 0;

	while (rep < 10)
	{
		while (letter <= 'z')
		{
			_putchar(letter);
			letter++;
		}
	_putchar('\n');
	letter = 'a';
	rep++;
	}
}
