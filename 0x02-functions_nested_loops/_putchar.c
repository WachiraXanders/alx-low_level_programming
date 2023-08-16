#include <unistd.h>
/**
 *_putchar - Will print the standard output on the screen of the character c
 *@c: The character that will be printed
 *
 *Return: Always 1 (Success) . Always -1 (Error)
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
