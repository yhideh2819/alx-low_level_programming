#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 *  main - Entry point
 *  Return: Always 0 (success)
 */
int main(void)
{
	int n, LastNum;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	LastNum = n % 10;
	if (LastNum > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, LastNum);
	else if (LastNum == 0)
		printf("Last digit of %d is %d and is 0\n", n, LastNum);
	else
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, LastNum);
	return (0);
}
