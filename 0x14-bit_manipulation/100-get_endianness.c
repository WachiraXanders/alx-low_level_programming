#include "main.h"

/**
 * get_endianness - Checks the endianness of the system.
 *
 * Return: 0 if big endian, 1 if little endian.
 */
int get_endianness(void)
{
    unsigned int value = 1;
    char *byte = (char *)&value;

    /* If the first byte (lowest address) is 1, it's little endian */
    return (*byte == 1);
}
