#include <unistd.h>
/**
 *_putchar - Will implement the putchar.
 *@c: Will be the character being checked.
 *
 *Return: Standard output (1).
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
