#include <stdio.h>
#include "main.h"

/**
	* is_prime_recursion - recusive helper function for prime check
	* @n: The number to be checked.
	*@i: the current divisor
	*
	* Return: 1 if the number is prime, 0 otherwise.
	*/
int is_prime_recursion(int n, int i)
{
	if (i * i > n)
	return (1);

	if (n % i == 0)
	return (0);

	return (is_prime_recursion(n, i + 1));
}

/**
	*is_prime_number - Check if a number is prime.
	*@n: the number to be checked.
	*
	*Return: 1 if the number is prime, 0 otherwise
	*/
int is_prime_number(int n)
{
	if (n <= 1)
	return (0);

	return (is_prime_recursion(n, 2));
}
