#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
	*main - Entry point
	*
	*Return: Always 0 (Success)
	*/
int main(void)
{
	int n=0;
	if (n < 0)
	{
		printf("negative\n");
	}
	else if (n == 0)
	{
		printf("zero\n");
	}
	else
	{
		printf("positive\n");
	}

	return 0;
}
